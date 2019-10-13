# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: arroznie <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/10/13 14:36:42 by arroznie     #+#   ##    ##    #+#        #
#    Updated: 2019/10/13 19:39:36 by arroznie    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a
NAMEB = _bonus.a

SRC = ft*

all: $(NAME)

$(NAME) :
		gcc -Wall -Wextra -Werror -c $(SRC)
		ar rc $(NAME) *.o

clean:
		/bin/rm -f *.o

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
