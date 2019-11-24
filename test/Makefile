all: get_src get_inl install clean

get_src:
	cp src/*.c .

get_inl:
	cp inc/*.h .

install:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o pathfinder *.c

uninstall:
	rm man

clean:
	rm -rf *.c
	rm -rf *.o
	rm -rf *.h
	rm -rf *.a

reinstal:
	unistall all