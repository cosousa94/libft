# nome do programa final
NAME = libft.a 

# compilador
CC = cc 

# flags de compilação
CFLAGS = -Wall -Wextra -Werror 

# arquivos fonte
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_bzero.c ft_memcpy.c \
ft_memchr.c ft_memmove.c ft_strncmp.c ft_strlcpy.c ft_atoi.c ft_strdup.c ft_memcmp.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_strlcat.c ft_striteri.c ft_strmapi.c ft_strnstr.c ft_strjoin.c ft_itoa.c ft_substr.c ft_strtrim.c ft_split.c ft_printf.c ft_printf_aux.c ft_isnum.c get_next_line.c get_next_line_utils.c \

# arquivos objeto (substituindo .c por .o)
OBJ = $(SRC:.c=.o) 

# regra padrão
all: $(NAME)

# compilação do programa
$(NAME): $(OBJ)        
	@ar rcs $@ $^      

# regra para arquivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# limpa arquivos objeto
clean:
	rm -f $(OBJ)

# limpa arquivos objeto e o executável
fclean: clean
	rm -f $(NAME)

# reconstrói o projeto do zero
re: fclean all

# declara que estes alvos não são arquivos
.PHONY: all clean fclean re
