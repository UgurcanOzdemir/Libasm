# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_puts.s                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/18 13:28:16 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/19 16:55:14 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

%define MACH_SYSCALL(nb)	0x2000000 | nb
%define	STDOUT				1
%define WRITE				4

EXTERN _ft_strlen

section .data
	eol: db 0xA

section .text
	global _ft_puts

_ft_puts:
	mov r9, rdi
	call _ft_strlen
	mov r10, rax

	mov rdi, STDOUT	;premier arg sortie std
	mov rsi, r9		;ton string
	mov rdx, r10	;ta len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	
	mov rdi, STDOUT		;premier arg sortie std
	lea rsi, [rel eol]		;ton string
	mov rdx, 1			;ta len
	mov rax, MACH_SYSCALL(WRITE)
	syscall
	ret