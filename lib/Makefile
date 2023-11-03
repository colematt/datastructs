# As you are assigned each subdirectory, add it to this variable.
# At first it will read only `SUBDIRS=vector`.
# Eventually it will read `SUBDIRS=list queue stack tree vector`
SUBDIRS=vector

.PHONY: all clean check memcheck

all clean check memcheck:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir $@; \
	done
