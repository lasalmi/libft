SRCS=$(SRCDIR)ft_atoi.c \
$(SRCDIR)ft_bzero.c \
$(SRCDIR)ft_isalnum.c \
$(SRCDIR)ft_isalpha.c \
$(SRCDIR)ft_isascii.c \
$(SRCDIR)ft_isdigit.c \
$(SRCDIR)ft_isprint.c \
$(SRCDIR)ft_itoa.c \
$(SRCDIR)ft_memalloc.c \
$(SRCDIR)ft_memccpy.c \
$(SRCDIR)ft_memchr.c \
$(SRCDIR)ft_memcmp.c \
$(SRCDIR)ft_memcpy.c \
$(SRCDIR)ft_memdel.c \
$(SRCDIR)ft_memmove.c \
$(SRCDIR)ft_memset.c \
$(SRCDIR)ft_putchar_fd.c \
$(SRCDIR)ft_putchar.c \
$(SRCDIR)ft_putendl_fd.c \
$(SRCDIR)ft_putendl.c \
$(SRCDIR)ft_putnbr_fd.c \
$(SRCDIR)ft_putnbr.c \
$(SRCDIR)ft_putstr_fd.c \
$(SRCDIR)ft_putstr.c \
$(SRCDIR)ft_strcat.c \
$(SRCDIR)ft_strchr.c \
$(SRCDIR)ft_strclr.c \
$(SRCDIR)ft_strcmp.c \
$(SRCDIR)ft_strcpy.c \
$(SRCDIR)ft_strdel.c \
$(SRCDIR)ft_strdup.c \
$(SRCDIR)ft_strequ.c \
$(SRCDIR)ft_striteri.c \
$(SRCDIR)ft_striter.c \
$(SRCDIR)ft_strjoin.c \
$(SRCDIR)ft_strlcat.c \
$(SRCDIR)ft_strlen.c \
$(SRCDIR)ft_strmapi.c \
$(SRCDIR)ft_strmap.c \
$(SRCDIR)ft_strncat.c \
$(SRCDIR)ft_strncmp.c \
$(SRCDIR)ft_strncpy.c \
$(SRCDIR)ft_strnequ.c \
$(SRCDIR)ft_strnew.c \
$(SRCDIR)ft_strnstr.c \
$(SRCDIR)ft_strrchr.c \
$(SRCDIR)ft_strsplit.c \
$(SRCDIR)ft_strstr.c \
$(SRCDIR)ft_strsub.c \
$(SRCDIR)ft_strtrim.c \
$(SRCDIR)ft_tolower.c \
$(SRCDIR)ft_toupper.c \
$(SRCDIR)ft_lstadd.c \
$(SRCDIR)ft_lstdel.c \
$(SRCDIR)ft_lstdelone.c \
$(SRCDIR)ft_lstiter.c \
$(SRCDIR)ft_lstmap.c \
$(SRCDIR)ft_lstnew.c \
$(SRCDIR)ft_strpbrk.c \
$(SRCDIR)ft_strsep.c \
$(SRCDIR)ft_strspn.c \
$(SRCDIR)ft_strcspn.c \
$(SRCDIR)ft_strlcpy.c \
$(SRCDIR)ft_intlen.c \
$(SRCDIR)ft_getchar.c \
$(SRCDIR)ft_getnbrs.c \
$(SRCDIR)get_next_line.c \
$(SRCDIR)ft_filerows.c \
$(SRCDIR)ft_uintlen.c
OBJECTS := $(SRCS:.c=.o)
SRCDIR=./
CC=gcc
FLAGS=-Wall -Wextra -Werror -g
NAME=libft.a

all : $(NAME)

$(OBJECTS) : $(SRCS)
	gcc $(FLAGS) -I. -c $(SRCS)
$(NAME) : $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

clean : 
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

test : re
	$(CC) $(FLAGS) -L. -I. main.c -lft

