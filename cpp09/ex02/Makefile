NAME=PmergeMe

SRCS=main.cpp PmergeMe.cpp
CFLAGS=-Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME):$(SRCS)
	@echo "Compiling..."
	@c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@echo "Cleaning..."
	@rm -f $(NAME)
re: clean all
.PHONY: all clean re