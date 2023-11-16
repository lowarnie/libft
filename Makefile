# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lowarnie <lowarnie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 12:58:13 by lowarnie          #+#    #+#              #
#    Updated: 2023/11/08 14:08:22 by lowarnie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


ALLFILES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
	ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c \
	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
	ft_strnstr.c ft_strrchr.c ft_substr.c \
	ft_tolower.c ft_toupper.c ft_split.c ft_strtrim.c \

BONUSFILES = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c \
	ft_lstsize.c ft_lstlast.c ft_lstdelone.c \

OBJ = $(ALLFILES:.c=.o)

BONUS = $(BONUSFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a 

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus : $(OBJ) $(BONUS)
	ar rcs $(NAME) $(OBJ) $(BONUS)

clean :
	rm -rf $(OBJ) $(BONUS)

fclean : clean
	rm -rf $(NAME)

re : fclean all