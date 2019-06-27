all: mv_src install clean

mv_src:
	cp src/*.c .
	cp inc/*.h .
install:
	clang -std=c11 -Wall -Wextra -Werror -Wpedantic -lncurses -o matrix_rain *.c
uninstall: 
	rm matrix_rain 
clean:
	rm -rf *.c
	rm -rf *.o
	rm -rf *.a
reinstall: uninstall all

