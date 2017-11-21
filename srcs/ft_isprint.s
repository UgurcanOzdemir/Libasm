# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isprint.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 13:57:36 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/16 17:33:10 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isprint

_ft_isprint:
	mov rax, 1
	cmp rdi, 32
	js nop
	cmp rdi, 127
	js yes

nop:
	mov rax, 0
	jmp end

yes:
	jmp end

end:
	ret