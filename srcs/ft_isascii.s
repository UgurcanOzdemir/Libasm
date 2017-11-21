# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isascii.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 13:57:27 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/16 17:32:51 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isascii

_ft_isascii:
	mov rax, 1
	cmp rdi, 0
	js nop
	cmp rdi, 128
	js yes

nop:
	mov rax, 0
	jmp end

yes:
	jmp end

end:
	ret