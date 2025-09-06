# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyildiz <gyildiz@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/06 16:31:34 by gyildiz           #+#    #+#              #
#    Updated: 2025/09/06 17:20:25 by gyildiz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
EXE_NAME = ptrref
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(EXE_NAME)

$(EXE_NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(EXE_NAME)

fclean: clean
	rm -rf $(EXE_NAME)

clean: 
	rm -rf $(OBJS)

re: fclean all

.PHONY: all fclean clean re