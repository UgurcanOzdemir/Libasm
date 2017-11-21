# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isdigit.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 13:57:30 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/16 17:32:59 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isdigit

_ft_isdigit:
		mov rax, 1
		cmp rdi, 48
		js nop
		cmp rdi, 58
		js yes
nop:
		mov rax, 0
		jmp end

yes:
		jmp end

end:
		ret