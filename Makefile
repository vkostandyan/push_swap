NAME = push_swap.a

HEADER = push_swap.h

C_FLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c push_operations.c swap_operations.c rotate_operations.c reverse_rotate_operations.c check_input.c check_input_utils.c \
		ft_atoi.c ft_lstadd_back.c ft_lstnew.c ft_putstr_fd.c ft_split.c ft_strlcpy.c ft_strlen.c

OBJS = ${SRCS.c=.o}

all: ${NAME}

${NAME}: 