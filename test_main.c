#include <printf.h>
#include "../includes/libfts.h"
#include <unistd.h>
#include <strings.h>
#include <stdlib.h>
#include <fcntl.h>

#define CLR printf("\e[39m");
#define RED printf("\e[31m");
#define GREEN printf("\e[32m");
#define YELLOW printf("\e[33m");
#define BLUE printf("\e[34m");

void	yellow(char* str) {
	YELLOW printf(" [%s]\n", str); CLR
}
void	green(char* str) {
	GREEN printf("%s", str); CLR
}
void	red(char* str) {
	RED printf("\n%s\n", str); CLR
}

int main(void)
{
	red("=================== LIBFT_ASM ===================");
	green("\n== FT_ISALNUM ==\n");
	{
		yellow(" int ft_isalnum(int c);");
		yellow(" Check if character is alphanumeric");
		printf("ft_isalnum('0') \t= [%d]\n", ft_isalnum('0'));
		printf("ft_isalnum('a') \t= [%d]\n", ft_isalnum('a'));
		printf("ft_isalnum('m') \t= [%d]\n", ft_isalnum('m'));
		printf("ft_isalnum('z') \t= [%d]\n", ft_isalnum('z'));
		printf("ft_isalnum('8') \t= [%d]\n", ft_isalnum('8'));
		printf("ft_isalnum('0') \t= [%d]\n", ft_isalnum('0'));
		printf("ft_isalnum('@') \t= [%d]\n", ft_isalnum('@'));
		printf("ft_isalnum('[') \t= [%d]\n", ft_isalnum('['));
		printf("ft_isalnum('A') \t= [%d]\n", ft_isalnum('A'));
		printf("ft_isalnum('M') \t= [%d]\n", ft_isalnum('M'));
		printf("ft_isalnum('Z') \t= [%d]\n", ft_isalnum('Z'));
		printf("ft_isalnum(0) \t\t= [%d]\n", ft_isalnum(0));
		printf("ft_isalnum(12) \t\t= [%d]\n", ft_isalnum(12));
		printf("ft_isalnum(96) \t\t= [%d]\n", ft_isalnum(96));
		printf("ft_isalnum(123) \t= [%d]\n", ft_isalnum(123));
		printf("ft_isalnum(127) \t= [%d]\n", ft_isalnum(127));
		printf("ft_isalnum(4544845) \t= [%d]\n", ft_isalnum(4544845));
	}

	green("\n== FT_ISALPHA ==\n");
	{
		yellow(" int ft_isalpha(int c);");
		yellow(" Check if character is alphabetic");
		printf("ft_isalpha('0') \t= [%d]\n", ft_isalpha('0'));
		printf("ft_isalpha('a') \t= [%d]\n", ft_isalpha('a'));
		printf("ft_isalpha('m') \t= [%d]\n", ft_isalpha('m'));
		printf("ft_isalpha('z') \t= [%d]\n", ft_isalpha('z'));
		printf("ft_isalpha('8') \t= [%d]\n", ft_isalpha('8'));
		printf("ft_isalpha('@') \t= [%d]\n", ft_isalpha('@'));
		printf("ft_isalpha('[') \t= [%d]\n", ft_isalpha('['));
		printf("ft_isalpha('A') \t= [%d]\n", ft_isalpha('A'));
		printf("ft_isalpha('M') \t= [%d]\n", ft_isalpha('M'));
		printf("ft_isalpha('Z') \t= [%d]\n", ft_isalpha('Z'));
		printf("ft_isalpha(0) \t\t= [%d]\n", ft_isalpha(0));
		printf("ft_isalpha(12) \t\t= [%d]\n", ft_isalpha(12));
		printf("ft_isalpha(-12) \t= [%d]\n", ft_isalpha(-12));
		printf("ft_isalpha(96) \t\t= [%d]\n", ft_isalpha(96));
		printf("ft_isalpha(123) \t= [%d]\n", ft_isalpha(123));
		printf("ft_isalpha(127) \t= [%d]\n", ft_isalpha(127));
		printf("ft_isalpha(4544845) \t= [%d]\n", ft_isalpha(4544845));
	}

	green("\n== FT_ISACII ==\n");
	{
		yellow(" int ft_isascii(int c);");
		yellow(" The ft_isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.");
		printf("ft_isascii('0') \t= [%d]\n", ft_isascii('0'));
		printf("ft_isascii('a') \t= [%d]\n", ft_isascii('a'));
		printf("ft_isascii('m') \t= [%d]\n", ft_isascii('m'));
		printf("ft_isascii('z') \t= [%d]\n", ft_isascii('z'));
		printf("ft_isascii('8') \t= [%d]\n", ft_isascii('8'));
		printf("ft_isascii('@') \t= [%d]\n", ft_isascii('@'));
		printf("ft_isascii('[') \t= [%d]\n", ft_isascii('['));
		printf("ft_isascii('A') \t= [%d]\n", ft_isascii('A'));
		printf("ft_isascii('M') \t= [%d]\n", ft_isascii('M'));
		printf("ft_isascii('Z') \t= [%d]\n", ft_isascii('Z'));
		printf("ft_isascii(0) \t\t= [%d]\n", ft_isascii(0));
		printf("ft_isascii(12) \t\t= [%d]\n", ft_isascii(12));
		printf("ft_isascii(-12) \t= [%d]\n", ft_isascii(-12));
		printf("ft_isascii(96) \t\t= [%d]\n", ft_isascii(96));
		printf("ft_isascii(123) \t= [%d]\n", ft_isascii(123));
		printf("ft_isascii(127) \t= [%d]\n", ft_isascii(127));
		printf("ft_isascii(4544845) \t= [%d]\n", ft_isascii(4544845));
	}

	green("\n== FT_ISDIGIT ==\n");
	{
		yellow(" int ft_isdigit(int c);");
		yellow(" Check if character is decimal digit.");
		printf("ft_isdigit('a') \t= [%d]\n", ft_isdigit('a'));
		printf("ft_isdigit('m') \t= [%d]\n", ft_isdigit('m'));
		printf("ft_isdigit('z') \t= [%d]\n", ft_isdigit('z'));
		printf("ft_isdigit('0') \t= [%d]\n", ft_isdigit('0'));
		printf("ft_isdigit('8') \t= [%d]\n", ft_isdigit('8'));
		printf("ft_isdigit('9') \t= [%d]\n", ft_isdigit('9'));
		printf("ft_isdigit('2') \t= [%d]\n", ft_isdigit('2'));
		printf("ft_isdigit('7') \t= [%d]\n", ft_isdigit('7'));
		printf("ft_isdigit('@') \t= [%d]\n", ft_isdigit('@'));
		printf("ft_isdigit('[') \t= [%d]\n", ft_isdigit('['));
		printf("ft_isdigit('A') \t= [%d]\n", ft_isdigit('A'));
		printf("ft_isdigit('M') \t= [%d]\n", ft_isdigit('M'));
		printf("ft_isdigit('Z') \t= [%d]\n", ft_isdigit('Z'));
		printf("ft_isdigit(0) \t\t= [%d]\n", ft_isdigit(0));
		printf("ft_isdigit(12) \t\t= [%d]\n", ft_isdigit(12));
		printf("ft_isdigit(-12) \t= [%d]\n", ft_isdigit(-12));
		printf("ft_isdigit(96) \t\t= [%d]\n", ft_isdigit(96));
		printf("ft_isdigit(123) \t= [%d]\n", ft_isdigit(123));
		printf("ft_isdigit(127) \t= [%d]\n", ft_isdigit(127));
		printf("ft_isdigit(4544845) \t= [%d]\n", ft_isdigit(4544845));
	}

	green("\n== FT_ISLOWER ==\n");
	{
		yellow(" int ft_islower(int c);");
		yellow(" Check if character is lowercase letter.");
		printf("ft_islower('0') \t= [%d]\n", ft_islower('0'));
		printf("ft_islower('a') \t= [%d]\n", ft_islower('a'));
		printf("ft_islower('m') \t= [%d]\n", ft_islower('m'));
		printf("ft_islower('z') \t= [%d]\n", ft_islower('z'));
		printf("ft_islower('8') \t= [%d]\n", ft_islower('8'));
		printf("ft_islower('@') \t= [%d]\n", ft_islower('@'));
		printf("ft_islower('[') \t= [%d]\n", ft_islower('['));
		printf("ft_islower('A') \t= [%d]\n", ft_islower('A'));
		printf("ft_islower('M') \t= [%d]\n", ft_islower('M'));
		printf("ft_islower('Z') \t= [%d]\n", ft_islower('Z'));
		printf("ft_islower(0) \t\t= [%d]\n", ft_islower(0));
		printf("ft_islower(12) \t\t= [%d]\n", ft_islower(12));
		printf("ft_islower(-12) \t= [%d]\n", ft_islower(-12));
		printf("ft_islower(96) \t\t= [%d]\n", ft_islower(96));
		printf("ft_islower(127) \t= [%d]\n", ft_islower(127));
		printf("ft_islower(123) \t= [%d]\n", ft_islower(123));
		printf("ft_islower(4544845) \t= [%d]\n", ft_islower(4544845));
	}

	green("\n== FT_ISPRINT ==\n");
	{
		yellow(" int ft_isprint(int c);");
		yellow(" Check if character is printable.");
		printf("ft_isprint('0') \t= [%d]\n", ft_isprint('0'));
		printf("ft_isprint('a') \t= [%d]\n", ft_isprint('a'));
		printf("ft_isprint('m') \t= [%d]\n", ft_isprint('m'));
		printf("ft_isprint('z') \t= [%d]\n", ft_isprint('z'));
		printf("ft_isprint('8') \t= [%d]\n", ft_isprint('8'));
		printf("ft_isprint('@') \t= [%d]\n", ft_isprint('@'));
		printf("ft_isprint('[') \t= [%d]\n", ft_isprint('['));
		printf("ft_isprint('A') \t= [%d]\n", ft_isprint('A'));
		printf("ft_isprint('M') \t= [%d]\n", ft_isprint('M'));
		printf("ft_isprint('Z') \t= [%d]\n", ft_isprint('Z'));
		printf("ft_isprint(0) \t\t= [%d]\n", ft_isprint(0));
		printf("ft_isprint(12) \t\t= [%d]\n", ft_isprint(12));
		printf("ft_isprint(-12) \t= [%d]\n", ft_isprint(-12));
		printf("ft_isprint(96) \t\t= [%d]\n", ft_isprint(96));
		printf("ft_isprint(122) \t= [%d]\n", ft_isprint(122));
		printf("ft_isprint(123) \t= [%d]\n", ft_isprint(123));
		printf("ft_isprint(126) \t= [%d]\n", ft_isprint(126));
		printf("ft_isprint(127) \t= [%d]\n", ft_isprint(127));
		printf("ft_isprint(4544845) \t= [%d]\n", ft_isprint(4544845));
	}

	green("\n== FT_ISUPPER ==\n");
	{
		yellow(" int ft_isupper(int c);");
		yellow(" Check if character is uppercase letter.");
		printf("ft_isupper('0') \t= [%d]\n", ft_isupper('0'));
		printf("ft_isupper('a') \t= [%d]\n", ft_isupper('a'));
		printf("ft_isupper('m') \t= [%d]\n", ft_isupper('m'));
		printf("ft_isupper('z') \t= [%d]\n", ft_isupper('z'));
		printf("ft_isupper('8') \t= [%d]\n", ft_isupper('8'));
		printf("ft_isupper('@') \t= [%d]\n", ft_isupper('@'));
		printf("ft_isupper('[') \t= [%d]\n", ft_isupper('['));
		printf("ft_isupper('A') \t= [%d]\n", ft_isupper('A'));
		printf("ft_isupper('M') \t= [%d]\n", ft_isupper('M'));
		printf("ft_isupper('Z') \t= [%d]\n", ft_isupper('Z'));
		printf("ft_isupper(0) \t\t= [%d]\n", ft_isupper(0));
		printf("ft_isupper(12) \t\t= [%d]\n", ft_isupper(12));
		printf("ft_isupper(96) \t\t= [%d]\n", ft_isupper(96));
		printf("ft_isupper(123) \t= [%d]\n", ft_isupper(123));
		printf("ft_isupper(127) \t= [%d]\n", ft_isupper(127));
		printf("ft_isupper(4544845) \t= [%d]\n", ft_isupper(4544845));
	}

	green("\n== FT_TOLOWER ==\n");
	{
		yellow(" int ft_tolower(int c);");
		yellow(" Convert uppercase letter to lowercase.");
		printf("ft_tolower(%1$c), ascii[%2$d], =[%2$c]\n", 'a', ft_tolower('a'));
		printf("ft_tolower(%1$c), ascii[%2$d], =[%2$c]\n", 'b', ft_tolower('b'));
		printf("ft_tolower(%1$c), ascii[%2$d], =[%2$c]\n", 'A', ft_tolower('A'));
		printf("ft_tolower(%1$c), ascii[%2$d], =[%2$c]\n", 'Z', ft_tolower('Z'));
		printf("ft_tolower(%1$c), ascii[%2$d], =[%2$c]\n", 32, ft_tolower(32));
		printf("ft_tolower(%1$c), ascii[%2$d], =[%2$c]\n", 92, ft_tolower(92));
		printf("ft_tolower(%1$c), ascii[%2$d], =[%2$c]\n", 127, ft_tolower(127));
	}

	green("\n== FT_TOUPPER ==\n");
	{
		yellow(" int ft_toupper(int c);");
		yellow(" Convert lowercase letter to uppercase.");
		printf("ft_toupper(%1$c), ascii[%2$d], =[%2$c]\n", 'a', ft_toupper('a'));
		printf("ft_toupper(%1$c), ascii[%2$d], =[%2$c]\n", 'b', ft_toupper('b'));
		printf("ft_toupper(%1$c), ascii[%2$d], =[%2$c]\n", 'A', ft_toupper('A'));
		printf("ft_toupper(%1$c), ascii[%2$d], =[%2$c]\n", 'Z', ft_toupper('Z'));
		printf("ft_toupper(%1$c), ascii[%2$d], =[%2$c]\n", 32, ft_toupper(32));
		printf("ft_toupper(%1$c), ascii[%2$d], =[%2$c]\n", 92, ft_toupper(92));
		printf("ft_toupper(%1$c), ascii[%2$d], =[%2$c]\n", 127, ft_toupper(127));
	}

	green("\n== FT_STRLEN ==\n");
	{
		yellow(" int ft_strlen(char *str);");
		yellow(" Return length of string");
		printf("ft_strlen(%1$s)= [%2$d], strlen(%1$s) =[%3$lu]\n", "", ft_strlen(""), strlen(""));
		printf("ft_strlen(%1$s)= [%2$d], strlen(%1$s) =[%3$lu]\n", "a", ft_strlen("a"), strlen("a"));
		printf("ft_strlen(%1$s)= [%2$d], strlen(%1$s) =[%3$lu]\n", "1348643684w3684f3w684f3w6e8f4w", ft_strlen("1348643684w3684f3w684f3w6e8f4w"), strlen("1348643684w3684f3w684f3w6e8f4w"));
		printf("ft_strlen(\\t\\n\\t\\0)= [%1$d], strlen(\\t\\n\\t\\0) =[%2$lu]\n", ft_strlen("\t\n\t\0"), strlen("\t\n\t\0"));
	}

	green("\n== FT_PUTS ==\n");
	{
		yellow(" void	ft_puts(char *str);");
		yellow(" The function ft_puts() writes the string s, and a terminating newline character, to the stream stdout.");
		ft_puts("\e[39m"); // CLR
		ft_puts("[ceci est print via ft_puts]");
		char *str = "blablabla";
		ft_puts(str);
		ft_puts("[DDZ\n]");
		ft_puts("");
	}

	green("\n== FT_MEMCPY ==\n");
	{
		yellow(" void	*ft_memcpy(void *dst, const void *src, size_t n);");
		yellow(" The ft_memcpy() function copies n bytes from memory area src to memory area dst.");
		{
			char *s1 = strdup("banane");
			char *s2 = strdup("123456");

			printf("try ft_memcpy(s2, s1, 6);\n");
			printf("s1 : [%s]\n", s1);
			printf("s2 : [%s]\n", s2);
			ft_memcpy(s2, s1, 6);
			printf("result:\ts1-> [%s]\n", s1);
			printf("result:\ts2-> [%s]\n", s2);
			free(s1);
			free(s2);
		
		}
		{
			char *s1 = strdup("banane");
			char *s2 = strdup("123456");

			printf("\ntry ft_memcpy(s2, s1, 3);\n");
			printf("s1 : [%s]\n", s1);
			printf("s2 : [%s]\n", s2);
			ft_memcpy(s2, s1, 3);
			printf("result:\ts1-> [%s]\n", s1);
			printf("result:\ts2-> [%s]\n", s2);

			free(s1);
			free(s2);
		}
		{
			char *s1 = strdup("banane");
			char *s2 = strdup("123456");

			printf("\ntry ft_memcpy(s2, s1, 0);\n");
			printf("s1 : [%s]\n", s1);
			printf("s2 : [%s]\n", s2);
			ft_memcpy(s2, s1, 0);
			printf("result:\ts1-> [%s]\n", s1);
			printf("result:\ts2-> [%s]\n", s2);

			free(s1);
			free(s2);
		}
	}

	green("\n== FT_MEMSET ==\n");
	{
		yellow(" void	*ft_memset(void *b, int c, size_t len);");
		yellow(" The ft_memset() function writes len bytes of value c to the string b.");

		char *s1 = malloc(sizeof(char) * 6);
		s1[5] = '\0';
		printf("try ft_memset(s1,'5', 5);\n");
			ft_memset(s1, '5', 5);
			printf("\tresult: [%s]\n", s1);
		
		printf("try ft_memset(s1,'4', 4);\n");		
			ft_memset(s1, '4', 4);
			printf("\tresult: [%s]\n", s1);
		
		printf("try ft_memset(s1, '3', 3);\n");
			ft_memset(s1, '3', 3);
			printf("\tresult: [%s]\n", s1);
		
		printf("try ft_memset(s1, '2', 2);\n");
			ft_memset(s1, '2', 2);
			printf("\tresult: [%s]\n", s1);

		printf("try ft_memset(s1, '#', 0);\n");
			ft_memset(s1, '#', 0);
			printf("\tresult: [%s]\n", s1);

		printf("try ft_memset(s1, '&', 1);\n");
			ft_memset(s1, '&', 1);
			printf("\tresult: [%s]\n", s1);
	}

	green("\n== FT_STRCAT ==\n");
	{
		yellow(" char	*ft_strcat(char *s1, char *s2);");
		yellow("  The ft_strcat() functions append a copy of the null-terminated string s2 to the end of the null-terminated string s1,\n then add a terminating \'\\0\'.");
		printf("ft_strcat 1:\n");
		{
			char *s1 = malloc(sizeof(char) * 3);
			ft_bzero(s1, 16);
			s1[0] = '0';
			char s2[] = "5";
			printf("\ts1 : %s\n", s1);
			printf("\ts2 : %s\n", s2);
			ft_strcat(s1, s2);
			printf("\tcat s1 : [%s]\n", s1);
			free(s1);
		}

		printf("ft_strcat 2:\n");
		{
			char *s1 = malloc(sizeof(char) * 11);
			ft_bzero(s1, 11);
			s1[0] = 'P';
			char s2[] = "123456789";
			printf("\ts1 : %s\n", s1);
			printf("\ts2 : %s\n", s2);
			ft_strcat(s1, s2);
			printf("\tcat s1 : [%s]\n", s1);
			free(s1);
		}

		printf("ft_strcat 3:\n");
		{
			char *s1 = malloc(sizeof(char) * 17);
			ft_bzero(s1, 16);
			s1[0] = '#';
			char s2[] = "123456789ABCDEF";
			printf("\ts1 : %s\n", s1);
			printf("\ts2 : %s\n", s2);
			ft_strcat(s1, s2);
			printf("\tcat s1 : [%s]\n", s1);
			free(s1);
		}
	}

	green("\n== FT_STRDUP ==\n");
	{
		yellow(" char	*ft_strdup(const char *s1);");
		yellow(" The ft_strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.");
		char *s1 = ft_strdup("banane rouge");
		printf("%s\n", s1);
		for(int i = 0 ; i < 13; i++)
			printf("s1[%d] = [%c] ascii->(%d)\n", i, s1[i], s1[i]);
		free(s1);
	}

	green("\n== FT_BZERO ==\n");
	{
		yellow(" void ft_bzero(void *s, size_t n);");
		yellow(" The ft_bzero() function writes n zeroed bytes to the string s.");
		{
			char s1[] = "banane";
			size_t len = ft_strlen(s1);
			printf("s1 : [%s]\n", s1);
			printf("try ft_bzero(s1, 3)...\n");
			ft_bzero(s1, 3);
			for (size_t i = 0; i < len ; i++)
				printf("s1[%zu] = [%c] ascii->(%d)\n", i, s1[i], s1[i]);
		}
		{
			char s1[] = "banane";
			size_t len = ft_strlen(s1);
			printf("\ns1 : [%s]\n", s1);
			printf("try ft_bzero(s1, 0)...\n");
			ft_bzero(s1, 0);
			for (size_t i = 0; i < len ; i++)
			printf("s1[%zu] = [%c] ascii->(%d)\n", i, s1[i], s1[i]);
		}
	}

	// green("\n== FT_CAT ==\n");
	// {
	// 	printf("try ft_cat() (cat ./Makefile)...\n");
	// 	int fd = open ("./Makefile", O_RDONLY);
	// 	ft_cat(fd);

	// 	printf("try ft_cat(-100) ...\n");
	// 	ft_cat(-100);

	// 	printf("try ft_cat(0) ...\n");
	// 	ft_cat(0);
	// }

	green("\n== FT_PUTSTR_FD ==\n");
	{
		yellow(" void	ft_putstr_fd(char *s, int fd);");
		yellow(" Writes string s on file descriptor fd.");
		ft_putstr_fd("\e[39m", 1); // CLR
		ft_putstr_fd("ft_putstr_fd() fd 1\n", 1);
		ft_putstr_fd("banane fd 1\n", 1);
		ft_putstr_fd("banane fd 2\n", 2);
		ft_putstr_fd("banane fd -1\n", -1);
	}

	green("\n== FT_PUTSTR ==\n");
	{
		yellow(" void	ft_putstr(char *s);");
		yellow(" Displays the string s on the standard output.");
		ft_putstr("\e[39m"); // CLR
		char *s1 = "banane orange\n";
		ft_putstr("ft_putstr()\n");
		ft_putstr(s1);
	}

	green("\n== FT_PUTCHR_FD ==\n");
	{
		yellow(" void	ft_putchr_fd(int c, int fd);");
		yellow(" Writes char c on file descriptor fd.");
		ft_putstr("\e[39m"); // CLR
		ft_putchr_fd('a', 1);
		ft_putchr_fd('\n', 1);
		char *s1 = "banane jaune\n";
		for (int i = 0; i < ft_strlen(s1); i++)
			ft_putchr_fd(s1[i], 1);
		ft_putchr_fd('b', 1);
		ft_putchr_fd('\n', 1);
		ft_putchr_fd('c', 2);
		ft_putchr_fd('d', -1);
	}

	green("\n== FT_PUTCHR ==\n");
	{
		yellow(" void	ft_putchr(int c);");
		yellow(" Displays the char c on the standard output.");
		ft_putstr("\e[39m"); // CLR
		ft_putchr('a');
		ft_putchr('\n');
		char *s1 = "banane jaune\n";
		for (int i = 0; i < ft_strlen(s1); i++)
			ft_putchr(s1[i]);
	}

	return (0);
}
