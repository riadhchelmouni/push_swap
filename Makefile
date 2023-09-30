NAME = push_swap
NAMEBNS = checker


CC = gcc
# CFLAGS = -Werror -Wall -Wextra 
RM = rm -rf


SRCS = swaps.c \
		algo.c \
		mnd.c  \
		ored.c \
		push_swap.c \
		rb.c   \
		rsp.c  \
		sss.c  

SRCSBNS =	bns/checker.c \
			bns/checker1.c \
			bns/checker2.c \
			bns/checker3.c \
			bns/checker4.c \
			bns/gnl.c


OBJS = $(SRCS:.c=.o)
OBJSBNS = $(SRCSBNS:.c=.o)

LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a
LIBFT_INCLUDE = $(LIBFT_PATH)/

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(LIBFT_INCLUDE)

all: $(NAME)

$(NAME): $(OBJS)
	@make all -C $(LIBFT_PATH)
	@$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_PATH) -lft -o $(NAME)

bonus: $(NAMEBNS)

$(NAMEBNS): $(OBJSBNS)
		@make all -C $(LIBFT_PATH)
		@$(CC) $(CFLAGS) $(OBJSBNS) -L$(LIBFT_PATH) -lft -o $(NAMEBNS)


clean:
	@$(RM) $(OBJS) $(OBJSBNS)
	@make clean -C $(LIBFT_PATH)

fclean: clean
	@$(RM) $(NAME) $(NAMEBNS)
	@make fclean -C $(LIBFT_PATH)

re: fclean all

.PHONY: all clean fclean re

# SRC		=	swaps.c
# HDR		=	push_swap.h

# SRCBNS		=	./bns/checker.c ./bns/gnl.c
# HDRBNS		=	./bns/checker.h 


# LIBFT_PATH = ./libft
# LIBFT = $(LIBFT_PATH)/libft.a
# LIBFT_INCLUDE = $(LIBFT_PATH)/

# CC = gcc
# # CFLAGS = -Wall -Werror -Wextra

# all : ${NAME}

# ${NAME} : ${SRC}
# 	@make all -C $(LIBFT_PATH)
# 	@${CC} ${CFLAGS} -o ${NAME} ${SRC} -I $(LIBFT_INCLUDE)
# 	@echo "Push_Swap Compiled!\n"

# bonus : ${NAMEBNS}

# ${NAMEBNS} : ${SRCBNS}
# 	@${CC} ${CFLAGS} -o ${NAMEBNS} ${SRCBNS}
# 	@echo "Checker Compiled!\n"

# clean :
# 	@echo "Clean  ALL ..."
# 	@rm -f ${NAME} ${NAMEBNS}
# 	@make clean -C $(LIBFT_PATH)
	
# fclean : clean
# 	@rm -f	${NAME} ${NAMEBNS}
# 	@make fclean -C $(LIBFT_PATH)
# 	@echo "Everything is cleaned!\n"

# re: fclean all

# .PHONY:all clean fclean re