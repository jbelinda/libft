NAME = libft
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
INC = $(NAME).h
TGT = $(NAME).a
CC = clang
CFLAGS = -Wall -Wextra -Werror

all: $(TGT)

$(TGT): $(OBJ)
	ar -rc $(TGT) $(OBJ)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TGT)

re: fclean all
