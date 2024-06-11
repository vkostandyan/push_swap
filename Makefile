NAME = push_swap
BONUS_NAME = checker
CFLAGS = -Wall -Wextra -Werror 
CC = cc
#-fsanitize=address
SRCS =	main.c

HEADER = 	push_swap.h \
			get_next_line.h

VALIDATION = check_input.c \
			 check_input_utils.c \
			 check_input_utils2.c 

OPERATIONS = 	push_operations.c \
				swap_operations.c \
				rotate_operations.c \
				reverse_rotate_operations.c

SORTING = 	sort.c \
			sort_for2.c \
			sort_for3.c \
			sort_for4.c \
			sort_for5.c \
			push_back.c \
			is_sorted.c \
			push_swap.c \
			fill_free_stack.c \
			get_optimal_step.c 

BONUS_SRCS = checker.c

LIBFT = ft_atoi.c \
		ft_split.c \
		ft_lstnew.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strcmp.c \
		ft_putstr_fd.c \
		ft_lstadd_back.c \
		ft_lstadd_front.c 

GNL = 	get_next_line.c \
		get_next_line_utils.c 

SRCS_DIR = ./sources/
HEADER_DIR = ./includes/
LIBFT_DIR = ./sources/libft/
GNL_DIR = ./sources/get_next_line/
VALIDATION_DIR = ./sources/validation/
OPERATIONS_DIR = ./sources/operations/
SORTING_DIR = ./sources/sorting/
BONUS_DIR = ./sources/bonus/

SRCS := $(addprefix $(SRCS_DIR), $(SRCS))
HEADER := $(addprefix $(HEADER_DIR), $(HEADER)) 
LIBFT := $(addprefix $(LIBFT_DIR), $(LIBFT))
GNL := $(addprefix $(GNL_DIR), $(GNL))
VALIDATION := $(addprefix $(VALIDATION_DIR), $(VALIDATION))
OPERATIONS := $(addprefix $(OPERATIONS_DIR), $(OPERATIONS))
SORTING := $(addprefix $(SORTING_DIR), $(SORTING))
BONUS_SRCS := $(addprefix $(BONUS_DIR), $(BONUS_SRCS))


SRCS += $(LIBFT)
SRCS += $(VALIDATION)
SRCS += $(OPERATIONS)
SRCS += $(SORTING)

BONUS_SRCS += $(LIBFT)
BONUS_SRCS += $(VALIDATION)
BONUS_SRCS += $(OPERATIONS)
BONUS_SRCS += $(SORTING)
BONUS_SRCS += $(GNL)

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS} Makefile 
	@${CC} ${CFLAGS} -I$(HEADER_DIR) ${OBJS} -o ${NAME}

$(BONUS_NAME): $(BONUS_OBJS) Makefile 
	@${CC} ${CFLAGS} -I$(HEADER_DIR) ${BONUS_OBJS} -o ${BONUS_NAME}

.c.o:
	$(CC) $(CFLAGS) -I$(HEADER_DIR) -c  $< -o $(<:.c=.o)

clean:
	rm -rf ${OBJS} ${BONUS_OBJS}

test:
	@echo ${BONUS_SRCS}

test1:
	@echo ${SRCS}

bonus:	${BONUS_OBJS} ${BONUS_NAME}

fclean: clean
	rm -rf ${NAME} ${BONUS_NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re
