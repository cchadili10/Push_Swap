# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 17:41:14 by hchadili          #+#    #+#              #
#    Updated: 2024/05/26 15:49:25 by hchadili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME_B = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = Mandatory/push_swap.c Mandatory/split.c Mandatory/ft_atoi.c \
		Mandatory/rules/sa.c Mandatory/rules/pa.c Mandatory/rules/ra.c \
 		Mandatory/rules/rra.c Mandatory/best_move.c Mandatory/split_into_chunk.c \
		Mandatory/ft_strlen.c Mandatory/best_move_r.c Mandatory/sort_small.c Mandatory/ft_is_valid.c \
		Mandatory/insert_list.c Mandatory/index_list.c

SRC_B = Bonus/push_swap_bonus.c Bonus/split_bonus.c Bonus/ft_atoi_bonus.c Bonus/ft_apply_bonus.c \
		Bonus/rules/sa_bonus.c Bonus/rules/pa_bonus.c Bonus/rules/ra_bonus.c \
 		Bonus/rules/rra_bonus.c Bonus/ft_strlen_bonus.c  Bonus/ft_is_valid_bonus.c \
		Bonus/insert_list_bonus.c Bonus/index_list_bonus.c Bonus/get_next_line/get_next_line_bonus.c Bonus/get_next_line/get_next_line_utils_bonus.c


OBJS = $(SRC:.c=.o)
OBJS_B = $(SRC_B:.c=.o)

all: $(NAME)

bonus: $(NAME_B)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	
$(NAME_B): $(OBJS_B)
	$(CC) $(OBJS_B) -o $(NAME_B)
	
Mandatory/%.o : Mandatory/%.c Mandatory/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

Bonus/%.o : Bonus/%.c Bonus/push_swap_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAME_B)

re: fclean all
