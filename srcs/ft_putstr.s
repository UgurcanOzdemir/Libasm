# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_putstr.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/21 13:32:25 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/21 14:06:19 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

;void	ft_putstr(char *s)
;write(int fildes, const void *buf, size_t nbyte);
; 1 rdi, 2 rsi, 3 rdx, 4 rcx

EXTERN _ft_putstr_fd

section .text
	global _ft_putstr

_ft_putstr:
	mov rsi, 1
	call _ft_putstr_fd
	ret