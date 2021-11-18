CFLAGS=-I .
LDLIBS=-lm -lft
CC=gcc
build: libft_test

clean:
	$(RM) libft_test

test: build
	- ./libft -s


libft_test: libft_test.c
	$(CC) $(CFLAGS) \
		-Iincludes -L. -o libft_test libft_test.c $(LDLIBS)

.PHONY: build clean test
