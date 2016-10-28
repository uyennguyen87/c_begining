CFLAGS=-Wall -g
CSRC = $(wildcard *.c)
ASRC = $(basename $(CSRC))

all: cleanall $(ASRC)

%: %.c
	cc $(CFLAGS) $< -o $@

cleanall:
	rm -f $(ASRC)

# clean: 
# 	rm -f $(filter-out $@,$(MAKECMDGOALS))

