# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isupper.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 13:57:38 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/16 17:33:16 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_isupper

_ft_isupper:
		mov rax, 1
		cmp rdi, 65
		js nop
		cmp rdi, 91
		js yes
nop:
		mov rax, 0
		jmp end

yes:
		jmp end

end:
		ret