# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_tolower.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 13:57:47 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/16 17:33:40 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXTERN _ft_isupper

section .text
	global _ft_tolower

_ft_tolower:
	call _ft_isupper
	cmp rax, 1
	js nop
	add rdi, 32

end:
	mov rax, rdi
	ret

nop:
	jmp end
