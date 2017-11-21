# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_isalnum.s                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uozdemir <uozdemir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/16 13:57:19 by uozdemir          #+#    #+#              #
#    Updated: 2017/10/16 17:32:38 by uozdemir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXTERN _ft_isalpha
EXTERN _ft_isdigit

section .text
	global _ft_isalnum

_ft_isalnum:
	call _ft_isalpha
	mov r8 ,rax
	call _ft_isdigit
	or rax, r8

end:
	ret