DIR:=tree
SRC:=$(addsuffix .c,$(DIR))
OBJ:=$(addsuffix .o,$(DIR))

CFLAGS=-g -Wall -std=c99 -I../../include
LDFLAGS=
LDLIBS=-lcunit
ARFLAGS= rcs
RMFLAGS=-f

all: $(OBJ) test

# This rule builds the CUnit executable, test
test: $(SRC) test.c
	$(warning $(DIR) test rule not implemented)

# This rule runs the CUnit executable, test
.PHONY: check
check: test
	$(warning $(DIR) check rule not implemented)

# This rule removes the CUnit executable, test 
# and any cruft in the directory like temp or lock files
.PHONY: clean
clean:
	$(warning $(DIR) clean rule not implemented)