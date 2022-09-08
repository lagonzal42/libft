#Makefile proyect libft
NAME = libft.a
OBJS = ft_atoi.o \
	   ft_bzero.o \
	   ft_calloc.o \
	   ft_isalnum.o \
	   ft_isalpha.o \
	   ft_isascii.o \
	   ft_isdigit.o \
	   ft_isprint.o \
	   ft_memchr.o \
	   ft_memcmp.o \
	   ft_memcpy.o \
	   ft_memset.o \
	   ft_strchr.o \
	   ft_strdup.o \
	   ft_strjoin.o \
	   ft_strlcat.o \
	   ft_strlcpy.o \
	   ft_strlen.o \
	   ft_strncmp.o \
	   ft_strrchr.o \
	   ft_strtrim.o \
	   ft_substr.o \
	   ft_tolower.o \
	   ft_toupper.o \
	   ft_memmove.o \
	   ft_split.o
CFLAGS = -Wall -Wextra -Werror
all: $(NAME)
$(NAME):$(OBJS)
	ar rsc $(NAME) $(OBJS) 
clean:
	@rm -f *.o
%.o: %.c
	@gcc $(CFLAGS) -c $< 
fclean: clean
	@rm -f $(NAME)
re: fclean all
