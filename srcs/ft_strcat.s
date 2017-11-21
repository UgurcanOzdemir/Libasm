# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcat.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 20:37:08 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/21 12:37:54 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

;char	*ft_strcat(char *s1, char *s2);
; 1 rdi, 2 rsi, 3 rdx, 4 rcx

EXTERN _ft_strlen
EXTERN _ft_memcpy

section .text
	global _ft_strcat

_ft_strcat:
	push rdi
	mov r10, rdi
	mov r11, rsi
	call _ft_strlen
	add r10, rax		;je suis a la fin de s1
	
	mov rdi, rsi
	call _ft_strlen
	mov r9, rax			;j'ai la len de s2 pour memcpy

	mov rdi, r10	; src pour memcpy
	mov rsi, r11	; dest pour memcpy
	mov rdx, r9		;len pour memcpy
	inc rdx			; len ++ pour la copie du '\0'
	call _ft_memcpy
	pop rax
	ret