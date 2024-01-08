# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 18:11:40 by jverdu-r          #+#    #+#              #
#    Updated: 2024/01/08 18:11:43 by jverdu-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = src/main.cpp

TARGET = Sed_is_for_Losers

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
		rm -f $(TARGET)
