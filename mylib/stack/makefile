BIN_DIR = /home/p/lib/
TARGET = libpzstack.so
TAR = ${addprefix ${BIN_DIR},${TARGET}}
${TAR}: pzstack.o
	gcc -shared pzstack.o -o $@
pzstack.o : stack.c
	gcc -fpic -c stack.c -o pzstack.o
