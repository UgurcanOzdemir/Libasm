# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_bzero.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 13:57:15 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/19 14:30:26 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

;void	ft_bzero(void *s, size_t n);
; 1 rdi, 2 rsi, 3 rdx, 4 rcx

EXTERN _ft_memset

section .text
	global _ft_bzero

_ft_bzero:
	mov rdx, rsi
	mov rsi, 0
	call _ft_memset

end :
	ret