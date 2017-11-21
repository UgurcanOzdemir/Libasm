# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_cat.s                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/19 16:38:00 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/20 14:38:06 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; void		ft_cat(int fd);
; 1 rdi, 2 rsi, 3 rdx, 4 rcx
; ssize_t read(int fildes, void *buf, size_t nbyte);

EXTERN	_ft_puts

%define MACH_SYSCALL(nb)	0x2000000 | nb
%define	STDOUT				1
%define READ				3
%define WRITE				4
%define	BUFF_SIZE			1

section .data
	buffer: times BUFF_SIZE db 0

section .text
	global _ft_cat

_ft_cat:
	push rdi					;
	lea rsi, [ rel buffer]		;
	mov rdx, BUFF_SIZE			;
	mov rax, MACH_SYSCALL(READ)	;
	syscall						;
	jc _end						; _read enable CF if error
	mov rdx, rax				;
	cmp rdx, 0					;if eol
	je _end						;

	mov rdi, STDOUT				;
	lea rsi, [rel buffer]		;
	mov rax, MACH_SYSCALL(WRITE);
	syscall						;
	pop	rdi						;
	jmp _ft_cat					;

_end:
	pop rdi
	ret