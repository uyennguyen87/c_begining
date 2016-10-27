CFLAGS=-Wall -g -DNDEBUG

all: clean ex22_main ex22_main_fix

%.o: %.c
	cc $(CFLAGS) -c -o $@ $<
ex22_main: ex22.o
	cc $(CFLAGS) $@.c $< -o $@

ex22_main_fix: ex22_fix.o
	cc $(CFLAGS) $@.c $< -o $@

clean:
	rm -f ex22.o ex22_fix.o ex22_main ex22_main_fix
