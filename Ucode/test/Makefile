all: install

install: 
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -c ./src/*.c
	ar rc minilibmx.a *.o
	cp inc/*.h .

uninstall: 
	rm -rf *.a
	rm -rf *.h

clean: 
	rm -rf *.o

reinstall: uninstall all
