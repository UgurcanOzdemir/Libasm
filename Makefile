MKDIR = /bin/MKDIR
RM = /bin/rm
CPATH = srcs/
CC = ~/.brew/bin/nasm -f macho64 
NAME = libfts.a
TESTNAME = check
HEADER = includes/
OPATH = obj/
SRC =	ft_bzero.s \
		ft_cat.s \
		ft_isalnum.s \
		ft_isalpha.s \
		ft_isascii.s \
		ft_isdigit.s \
		ft_islower.s \
		ft_isprint.s \
		ft_isupper.s \
		ft_memcpy.s \
		ft_memset.s \
		ft_putchr_fd.s \
		ft_putchr.s \
		ft_puts.s \
		ft_putstr_fd.s \
		ft_putstr.s \
		ft_strcat.s \
		ft_strdup.s \
		ft_strlen.s \
		ft_tolower.s \
		ft_toupper.s

OFILES = $(patsubst %.s, $(OPATH)%.o, $(SRC))
all: $(OPATH) $(NAME)

$(NAME): $(OFILES)
	@ar rc $(NAME) $(OFILES)
	@ranlib $(NAME)
	@echo "\x1b[32;01m$(NAME) is ready\x1b[0m"

$(OPATH)%.o: $(CPATH)%.s
	@$(CC) -I$(HEADER) $< -o $@ 
	@echo "\x1b[33m$ \t- $@\x1b[0m"

clean:
	@$(RM) -rf $(OPATH)
	@echo "\x1b[91m$ Removing OBJ for $(NAME) {clean} \x1b[0m"

fclean: clean
	@$(RM) -f $(NAME)
	@echo "\x1b[91m$ Removing $(NAME) {fclean} \x1b[0m"
	@$(RM) -f $(TESTNAME)
	@echo "\x1b[91m$ Removing $(TESTNAME) {fclean} \x1b[0m"

re: fclean all

test:all
	@gcc test_main.c -Wall -Werror -Wextra -I $(HEADER) $(NAME) -o $(TESTNAME)
	@./check

$(OPATH):
	@echo "\x1b[33mCreation of OBJ path for $(NAME)\x1b[0m"
	@$(MKDIR) $(OPATH)

.PHONY: all clean fclean re
