# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memset.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/18 16:55:52 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/18 18:10:36 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; void	*ft_memset(void *b, int c, size_t len);

section .text
	global _ft_memset

_ft_memset:
	mov r9, rdi
	mov al, sil ; sil == les 8 bit du poids faible du rdi
	mov rcx, rdx
	rep stosb
	mov rax, r9
end:
	ret