output : inheritance.o Isosceles.o Triangle.o
	g++ inheritance.o Isosceles.o Triangle.o -o output
inheritance.o : inheritance.cpp
	g++ -c inheritance.cpp
Isosceles.o : Isosceles.h Isosceles.cpp
	g++ -c Isosceles.h Isosceles.cpp
Triangle.o : Triangle.h Triangle.cpp
	g++ -c Triangle.h Triangle.cpp

clearn:
	rm *.o output
