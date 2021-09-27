CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -I.
SRCS		= main.cpp Zombie.cpp ZombieHorde.cpp
OBJS		= $(SRCS:.cpp=.o)
NAME		= exzombies

all:	$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
