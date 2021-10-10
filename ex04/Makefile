CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -I.
SRCS		= main.cpp Replace.cpp putErr.cpp
OBJS		= $(SRCS:.cpp=.o)
NAME		= replace

all:	$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
