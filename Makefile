NAME = libft.a

SOURCES = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
          ft_isdigit.c ft_isprint.c ft_memcpy.c\
          ft_memmove.c ft_memset.c  ft_strlcat.c ft_strlcpy.c\
          ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
          ft_toupper.c ft_tolower.c ft_memchr.c 

OBJECTS = $(SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) clean

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re