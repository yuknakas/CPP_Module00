# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/11 13:51:24 by yuknakas          #+#    #+#              #
#    Updated: 2025/10/11 13:59:29 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	MyAwsPhone
CPP		=	c++ -Wall -Wextra -Werror -std=c++98

SRCS	=	srcs/contact.cpp srcs/main.cpp srcs/phonebook.cpp
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