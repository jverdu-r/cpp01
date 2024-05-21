# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 11:03:02 by jverdu-r          #+#    #+#              #
#    Updated: 2024/05/21 17:42:14 by jverdu-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra -fsanitize=address -g3

TARGET = BraiiiiiiinnnzzzZ

SRC = src/main.cpp \
		src/zombie.cpp \
		src/newZombie.cpp \
		src/randomChump.cpp

all: $(TARGET)

$(TARGET): $(SRC)
		$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)
clean:
		rm -f $(TARGET)