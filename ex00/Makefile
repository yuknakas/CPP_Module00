# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/06 11:13:27 by yuknakas          #+#    #+#              #
#    Updated: 2025/10/11 13:59:22 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone
CPP		=	c++ -Wall -Wextra -Werror -std=c++98

SRCS	=	megaphone.cpp
OBJS	=	$(SRCS:.cpp=.o)

RMFLAG	=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CPP) -c $< -o $@

clean:
	$(RMFLAG) $(NAME)

fclean:	clean
	$(RMFLAG) $(OBJS)