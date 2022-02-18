NAME:=libft.a

C_SOURCE:=$(wildcard *.c)

H_SOURCE:=$(wildcard *.h)
 
OBJ=$(C_SOURCE:.c=.o)

CC=gcc

CC_FLAGS=-Wall -Werror -Wextra


all: $(NAME)

$(NAME): $(OBJ)
	@ar r $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CC_FLAGS) -c $< -o $@ 
clean:	
	rm -rf *.o 

fclean:	clean
	rm -f $(NAME)

re: fclean all
			
.PHONY: all clean
