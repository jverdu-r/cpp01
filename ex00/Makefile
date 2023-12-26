# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 11:03:02 by jverdu-r          #+#    #+#              #
#    Updated: 2023/12/26 11:03:04 by jverdu-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

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