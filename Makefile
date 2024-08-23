# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tassadin <tassadin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/23 10:44:57 by tassadin          #+#    #+#              #
#    Updated: 2024/08/23 10:55:33 by tassadin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_split.c push.c rotation.c utils.c basic_instructions.c\
		linked_functions.c strjoin.c ft_putstr_fd.c mini_sort.c\
		reverse_rotation.c swap.c Push_Swap.c errors.c algo.c\
		final_fct.c\

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all