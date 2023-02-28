# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgalata <rgalata@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 11:29:20 by rgalata           #+#    #+#              #
#    Updated: 2023/02/28 18:20:41 by rgalata          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

GREEN		= \033[0;32m
RED			= \033[0;31m
RESET		= \033[0m

FLAGS		= -Wall -Wextra -Werror

CC			= gcc

REMOVE		= rm -f

SRCS		= ft_isalpha.c 			\
			ft_isdigit.c 			\
			ft_isalnum.c 			\
			ft_isascii.c 			\
			ft_isprint.c 			\
			ft_strlen.c 			\
			ft_memset.c 			\
			ft_bzero.c 				\
			ft_memcpy.c 			\
			ft_memmove.c 			\
			ft_strlcpy.c 			\
			ft_strlcat.c 			\
			ft_toupper.c 			\
			ft_tolower.c 			\
			ft_strchr.c 			\
			ft_strrchr.c 			\
			ft_strncmp.c			\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_strnstr.c			\
			ft_atoi.c 				\
			# ft_strdup.c 			\
			# ft_calloc.c 			\
			# ft_strnstr.c 			\
			# ft_itoa.c 				\
			# ft_substr.c	 			\
			# ft_split.c 				\
			# ft_strjoin.c 			\
			# ft_strtrim.c			\
			# ft_itoa.c 				\
			# ft_strmapi.c 			\
			# ft_striteri.c 			\
			# ft_putchar_fd.c 		\
			# ft_putstr_fd.c 			\
			# ft_putendl_fd.c 		\
			# ft_putnbr_fd.c			\
			

OBJS		= $(SRCS:.c=.o)

all:		${NAME}

${NAME}:	${OBJS}
			ar rcs $(NAME) $(OBJS)
			@echo "$(NAME): $(GREEN)$(NAME) was created$(RESET)"

.c.o:
		${CC} ${FLAGS} -c $< -o ${<:.c=.o}
		@echo "\n$(NAME): $(GREEN)object files were created$(RESET)"

clean:
		${REMOVE} ${OBJS} ${BONUS_OBJS}
		@echo "$(NAME): $(RED)object files were deleted$(RESET)"

fclean:		clean
		${REMOVE} ${NAME}
		@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

re :		fclean all

.PHONY:		all clean fclean re bonus