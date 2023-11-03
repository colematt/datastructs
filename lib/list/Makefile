DIRNAME:=list
SRC:=$(addsuffix .c,$(DIRNAME))
OBJ:=$(addsuffix .o,$(DIRNAME))
LOG:=$(addsuffix .log,$(DIRNAME))

CFLAGS=-g -Wall -std=c99 -I../../include
LDFLAGS=
LDLIBS=-lcunit
ARFLAGS= rcs
RMFLAGS=-f

all: $(OBJ) test

# This rule builds the CUnit executable, test
test: $(SRC) test.c
	$(warning $(DIR) $@ rule not implemented)

# This rule runs the CUnit unit testing executable
.PHONY: check
check: test
	./test
	
# This rule runs the CUnit test executable inside Valgrind
.PHONY: memcheck
memcheck: test
	valgrind --leak-check=summary --error-exitcode=1 --log-file=$(LOG) ./test

# This rule removes all files created after running `make all`, `make check` 
# or `make memcheck`, and any cruft in the directory like temp or lock files
.PHONY: clean
clean:
	$(warning $(DIR) $@ rule not implemented)