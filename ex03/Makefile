CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -I.
SRCS		= main.cpp Weapon.cpp  HumanA.cpp  HumanB.cpp
OBJS		= $(SRCS:.cpp=.o)
NAME		= attack

all:	$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
