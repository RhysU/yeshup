# GNU-compatible toolchain assumed.

CFLAGS += -g -Wall -Wextra -Wunused -ansi -pedantic
PROGS := yeshup
all: $(PROGS)

clean:
	rm -fv $(PROGS) *.o
