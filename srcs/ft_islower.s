# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_islower.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 13:57:33 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/16 17:33:05 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_islower

_ft_islower:
		mov rax, 1
		cmp rdi, 97
		js nop
		cmp rdi, 123
		js yes
nop:
		mov rax, 0
		jmp end

yes:
		jmp end

end:
		ret