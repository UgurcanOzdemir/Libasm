# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/18 18:11:07 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/20 15:52:15 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; void	*ft_memcpy(void *dst, const void *src, size_t n)
; 1 rdi, 2 rsi, 3 rdx, 4 rcx

section .text
	global _ft_memcpy

_ft_memcpy:
	push rdi
	mov rcx, rdx
	repe movsb
	pop rax
	ret