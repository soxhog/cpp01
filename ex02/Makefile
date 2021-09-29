CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror
SRCS		= main.cpp
OBJS		= $(SRCS:.cpp=.o)
NAME		= brain

all:	$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
