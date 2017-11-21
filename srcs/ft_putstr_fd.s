# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_putstr_fd.s                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/21 13:12:38 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/21 13:26:40 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

;void	ft_putstr_fd(char *s, int fd)
;write(int fildes, const void *buf, size_t nbyte);
; 1 rdi, 2 rsi, 3 rdx, 4 rcx

%define MACH_SYSCALL(nb) 0x2000000 | nb
%define WRITE MACH_SYSCALL(4)


EXTERN _ft_strlen

section .text
	global _ft_putstr_fd

_ft_putstr_fd:
	cmp rsi, 0
	jl _end				;invalid fd
	push rdi			;push str in stack
	call _ft_strlen		; get len of str

	mov rdi, rsi		;fd for write syscall
	pop rsi				;str for write syscall
	mov rdx, rax		;len for write syscall
	mov rax, WRITE		
	syscall

_end:
	ret