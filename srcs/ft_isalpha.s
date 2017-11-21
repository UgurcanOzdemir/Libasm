# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalpha.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 13:57:23 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/16 17:32:45 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isalpha

_ft_isalpha:
		mov rax, 1
		cmp rdi, 65
		js nop
		cmp rdi, 91
		js yes
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