# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yasinbestrioui <marvin@42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/22 16:03:10 by yasinbest         #+#    #+#              #
#    Updated: 2021/12/22 16:04:24 by yasinbest        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = client 

NAME2 = server

SRCS1 = client.c

SRCS2 = server.c

OBJS1 = $(SRCS1:.c=.o)

OBJS2 = $(SRCS2:.c=.o)

CC		= gcc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME1): $(OBJS1)
	$(CC) $(CFLAGS) $(OBJS1)  -o $(NAME1)

$(NAME2): $(OBJS2)
	$(CC) $(CFLAGS) $(OBJS2)  -o $(NAME2)

all:	$(NAME1) $(NAME2)

clean:
		$(RM) $(OBJS1) $(OBJS2)

fclean:	clean
		$(RM) $(NAME1) $(NAME2)

re:		fclean all
