NAME			= philo

HEAD_LIST		= philo.h

SRCS			= main.c
OBJS		  	= $(SRCS:%.c=%.o)

CC		      = cc
CFLAGS		  = -Wall -Wextra -Werror
RM			  =	rm -rf

.PHONY: all clean fclean re 

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEAD_LIST)
	$(CC) $(CFLAGS) $(OBJS) -o $@ 

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: clean $(OBJS_DIR) fclean all 
