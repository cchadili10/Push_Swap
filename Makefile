# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 17:41:14 by hchadili          #+#    #+#              #
#    Updated: 2024/03/25 18:05:23 by hchadili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = Mandatory/push_swap.c Mandatory/split.c Mandatory/ft_atoi.c \
		Mandatory/rules/sa.c Mandatory/rules/pa.c Mandatory/rules/ra.c \
 		Mandatory/rules/rra.c Mandatory/best_move.c Mandatory/split_into_chunk.c \
		Mandatory/ft_strlen.c Mandatory/best_move_r.c Mandatory/sort_small.c Mandatory/ft_is_valid.c \
		Mandatory/insert_list.c Mandatory/index_list.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	
Mandatory/%.o : Mandatory/%.c Mandatory/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
