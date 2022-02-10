NAME = a.out

CXX = clang++

STD = -std=c++98

CXXFLAGS = -Wall -Wextra -Werror $(STD)

SRCS = main.cpp mutantstack.cpp

OBJS = $(SRCS:.cpp=.o)

all:$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all fclean clean re
