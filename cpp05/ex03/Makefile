NAME=bureaucrat

SRCS=Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
CFLAGS=-Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME):$(SRCS)
	@echo "\033[1;33mCompiling..."
	@c++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@echo "\033[1;31mCleaning...\033[0m"
	@rm -f $(NAME)
re: clean all
.PHONY: all clean re