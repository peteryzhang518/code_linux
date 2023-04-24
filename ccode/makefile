classtemp: main.o classcode1.o classcode2.o
	g++ -o classtemp main.o classcode1.o classcode2.o


main.o: main.c
	g++ -c main.c -o main.o


classcode1.o: classcode1.cpp
	g++ -c classcode1.cpp -o classcode1.o

#libclasscode1.so: classcode1.o
#	g++ -shared classcode1.o -o libclasscode1.so

classcode2.o: classcode2.cpp
	g++ -c classcode2.cpp -o classcode2.o
