output : vector.o Student.o
	g++ vector.o Student.o -o output
vector.o : vector.cpp
	g++ -c vector.cpp
Student.o: Student.cpp Student.h
	g++ -c Student.cpp

clearn:
	rm *.o output
