# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/29 16:44:29 by yuknakas          #+#    #+#              #
#    Updated: 2025/11/29 16:51:08 by yuknakas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Accounting
CPP		=	c++ -Wall -Wextra -Werror -std=c++98

SRCS	=	srcs/Account.cpp srcs/tests.cpp
OBJS	=	$(SRCS:.cpp=.o)

RMFLAG	=	-rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(CPP) -c $< - $@

clean:
	$(RMFLAG) $(OBJS)

fclean: clean
	$(RMFLAG) $(NAME)

.PHONY: all clean fclean