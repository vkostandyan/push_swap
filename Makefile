NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

HDR = push_swap.h

CC = cc 

SRCS =  push_operations.c swap_operations.c rotate_operations.c reverse_rotate_operations.c check_input.c check_input_utils.c check_input_utils2.c\
		ft_atoi.c ft_lstadd_back.c ft_lstnew.c ft_putstr_fd.c ft_split.c ft_strlcpy.c ft_strlen.c ft_lstadd_front.c fill_free_stack.c \
		push_swap.c is_sorted.c get_optimal_step.c sort.c push_back.c \
		sort_for2.c sort_for3.c sort_for4.c sort_for5.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS} ${HDR} Makefile
	@$(CC) $(OBJS) main.c -o $(NAME)

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re
