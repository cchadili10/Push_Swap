# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hchadili <hchadili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 17:41:14 by hchadili          #+#    #+#              #
#    Updated: 2024/03/11 17:44:53 by hchadili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = Mandatory

OBJS = $(SRC_C:.c=.o)

all: $(NAME)
	
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	
Mandatory/%.o : Mandatory/%.c Mandatory/push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
	
# Bonus/%.o : Bonus/%.c Bonus/minitalk_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all
