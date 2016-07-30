mymakefile: Book.o Library.o main.o
	g++ Book.o Library.o main.o -o mymakefile
Book.o: Book.cpp Book.h
	g++ -c Book.cpp
Library.o: Library.cpp Book.h Library.h
	g++ -c Library.cpp
main.o: main.cpp Book.h Library.cpp
	g++ -c main.cpp
clean:
	rm -f *.o
	rm mymakefile
run: mymakefile
	./mymakefile