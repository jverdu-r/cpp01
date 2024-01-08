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