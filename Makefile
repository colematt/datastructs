CFLAGS=-g -Wall -std=c99
LDFLAGS=
LDLIBS=-lcunit
ARFLAGS=rcs

.PHONY: all clean

all clean:
  $(MAKE) -C lib $@
