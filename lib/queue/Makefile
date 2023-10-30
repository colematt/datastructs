DIR:=queue
SRC:=$(addsuffix .c,$(DIR))

all: test

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