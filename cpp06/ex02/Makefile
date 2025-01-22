NAME=dynamic_cast

SRCS=main.cpp Base.cpp A.cpp B.cpp C.cpp
Flags=-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCS)
	c++ $(Flags) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re