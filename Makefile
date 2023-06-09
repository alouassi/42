# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alouassi <alouassi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 12:54:23 by alouassi          #+#    #+#              #
#    Updated: 2023/06/08 16:15:28 by alouassi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    =   push_swap.c ft_index.c ft_push.c ft_rev_rotate.c ft_rotate.c ft_swap.c ft_utils.c ft_utils2.c push_swap_utils.c ft_algo3.c
OBJS    =   ${SRCS:.c=.o}
RM      =   rm -f
CFLAGS  =   -Wall -Wextra -Werror
NAME    =	push_swap
.c.o:

	gcc ${CFLAGS} -c $< -o ${<:.c=.o}
all:	${NAME}
${NAME}:	${OBJS}
	gcc ${CFLAGS} ${OBJS} -o ${NAME}
clean:
	${RM} ${OBJS}
fclean:	clean
	${RM} ${NAME}
re:	fclean all
