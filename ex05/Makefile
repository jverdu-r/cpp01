# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 16:41:46 by jverdu-r          #+#    #+#              #
#    Updated: 2024/01/09 16:41:48 by jverdu-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++

CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = src/main.cpp \
	  src/harl.cpp

TARGET = Harl

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

clean:
		rm -f $(TARGET)
