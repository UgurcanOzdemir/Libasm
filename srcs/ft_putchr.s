# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_putchr.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/21 13:53:25 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/21 15:41:43 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

;void	ft_putchr(int c)
;write(int fildes, const void *buf, size_t nbyte);
; 1 rdi, 2 rsi, 3 rdx, 4 rcx

EXTERN _ft_putchr_fd

section .text
	global _ft_putchr

_ft_putchr:
	mov rsi, 1
	call _ft_putchr_fd
	ret