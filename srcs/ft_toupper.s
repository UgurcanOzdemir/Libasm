# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_toupper.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 13:57:49 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/16 17:33:43 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXTERN _ft_islower

section .text
	global _ft_toupper

_ft_toupper:
	call _ft_islower
	cmp rax, 1
	js nop
	sub rdi, 32

end :
	mov rax, rdi
	ret

nop:
	jmp end