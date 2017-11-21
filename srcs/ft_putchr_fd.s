# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_putchr_fd.s                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/21 15:34:54 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/21 16:13:14 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

;void	ft_putchr_fd(int c, int fd)
;write(int fildes, const void *buf, size_t nbyte);
; 1 rdi, 2 rsi, 3 rdx, 4 rcx

%define MACH_SYSCALL(nb)	0x2000000 | nb
%define WRITE				MACH_SYSCALL(4)

section .bss
	mychar resb 1

section .text
	global _ft_putchr_fd

_ft_putchr_fd:
	cmp rsi, 0
	jl _end					;fd error

	mov [rel mychar], rdi	;save char in data section
	mov rdi, rsi			; set output fd
	lea rsi , [rel mychar]	;
	mov	rdx, 1			
	mov rax, WRITE
	syscall

_end:
	ret