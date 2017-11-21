# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/19 14:31:04 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/19 16:29:50 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

;char	*ft_strdup(const char *s1)
; 1 rdi, 2 rsi, 3 rdx, 4 rcx

EXTERN _malloc
EXTERN _ft_strlen
EXTERN _ft_memcpy

section .text
	global _ft_strdup

_ft_strdup:
	mov r14, rdi		;save du srt a _malloc
	call _ft_strlen		;
	mov r13, rax		;save de la len
	inc rax				;
	mov rdi, rax		;len du _malloc
	sub rsp, 8			; stack alignement
	call _malloc		;
	add rsp, 8			; stack alignement
	mov rdi, rax		;dest du memcpys
	mov rsi, r14		;src du memcpy
	mov rdx, r13		;len du memcpy
	call _ft_memcpy		;
	ret