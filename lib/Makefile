SUBDIRS=vector

.PHONY: all clean check

all clean check:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir $@; \
	done