# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 13:57:44 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/20 15:18:08 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section .text
	global _ft_strlen

_ft_strlen:
	mov al, 0
	mov rcx, -1
	repnz scasb 
	not rcx
	lea rax, [rcx - 1]
	ret