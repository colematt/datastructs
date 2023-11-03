DIRNAME:=stack
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
	$(warning $(DIRNAME) $@ rule not implemented)

# This rule runs the CUnit executable, test
.PHONY: check
check: test
	./test | tee -a $(LOG)

# This rule runs the CUnit test executable inside Valgrind
.PHONY: memcheck
memcheck: test
	valgrind --leak-check=summary --error-exitcode=1 ./test 2>&1 \
	| tee -a $(LOG)

# This rule removes the CUnit executable, test 
# and any cruft in the directory like temp or lock files
.PHONY: clean
clean:
	$(warning $(DIRNAME) $@ rule not implemented)