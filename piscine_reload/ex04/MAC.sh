# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: towelie <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/25 10:43:39 by towelie           #+#    #+#              #
#    Updated: 2018/09/25 10:45:59 by towelie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig | grep 'ether ' | cut -d " " -f 2
