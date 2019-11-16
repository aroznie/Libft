# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/13 14:36:42 by arroznie     #+#   ##    ##    #+#        #
#    Updated: 2019/11/12 18:46:12 by arroznie    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strmapi.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c

SRCB =	ft_lstadd_back_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstnew_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c

HEADER = libft.h

OBJ = $(SRC:.c=.o)

OBJB = $(SRC:.c=.o) $(SRCB:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(OBJ)

bonus: $(OBJB) $(HEADER)
	gcc -Wall -Wextra -Werror -c $(SRCB) $(SRC)
	ar rc $(NAME) $(OBJB)

.PHONY: clean fclean bonus re all

clean:
	/bin/rm -f $(OBJB)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
