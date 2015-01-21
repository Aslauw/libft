# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbinet <lbinet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/19 14:18:01 by lbinet            #+#    #+#              #
#    Updated: 2015/01/21 12:20:31 by lbinet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Wextra -Werror

SRC			=	memset.c		\
				bzero.c			\
				memcpy.c		\
				memccpy.c		\
				memmove.c		\
				memchr.c		\
				memcmp.c		\
				\
				strlen.c		\
				strdup.c		\
				strcpy.c		\
				strncpy.c		\
				strcat.c		\
				strncat.c		\
				strlcat.c		\
				strchr.c		\
				strrchr.c		\
				strstr.c		\
				strnstr.c		\
				strcmp.c		\
				strncmp.c		\
				\
				atoi.c			\
				isalpha.c		\
				isdigit.c		\
				isalnum.c		\
				isascii.c		\
				isprint.c		\
				toupper.c		\
				tolower.c		\
				\
				memalloc.c		\
				memdel.c		\
				strnew.c		\
				strdel.c		\
				striter.c		\
				striteri.c		\
				strmap.c		\
				strmapi.c		\
				strequ.c		\
				strnequ.c		\
				strsub.c		\
				strjoin.c		\
				strtrim.c		\
				strsplit.c		\
				itoa.c			\
				\
				putchar.c		\
				putstr.c		\
				putendl.c		\
				putnbr.c		\
				putchar_fd.c	\
				putstr_fd.c		\
				putendl_fd.c	\
				putnbr_fd.c

OBJ			= $(SRC:.c=.o)

# Colors
NO_COLOR	= \x1b[0m
GREEN		= \x1b[32;01m
RED			= \x1b[31;01m
YELLOW		= \x1b[33;01m
GRAY		= \x1b[30;01m

.PHONY: all re clean fclean

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(GRAY)Creating $(RED)$(NAME)$(NO_COLOR)"
	@ar -cr $(NAME) $(OBJ)
	@if [ -a $(NAME) ] ; \
	then \
		printf "\e[42G$(GREEN)✓$(NO_COLOR)\n" ; \
	fi;

.c.o:
	@printf "$(YELLOW)$< $(NO_COLOR)"
	@$(CC) $(CFLAGS) -c $<
	@if [ -a $@ ] ; \
	then \
		printf "\e[42G$(GREEN)✓$(NO_COLOR)\n" ; \
	fi;

clean:
	@printf "$(GRAY)Removing objects$(NO_COLOR)"
	@rm -f $(OBJ)
	@printf "\e[42G$(GREEN)✓$(NO_COLOR)\n"

fclean: clean
	@printf "$(GRAY)Removing library$(NO_COLOR)"
	@rm -f $(NAME)
	@printf "\e[42G$(GREEN)✓$(NO_COLOR)\n"

re: fclean all
