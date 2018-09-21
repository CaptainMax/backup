output : classoop.o BMI.o
	g++ classoop.o BMI.O -o output
classoop.o: classoop.cpp
	g++ -c classoop.cpp
BMI.O: BMI.cpp BMI.h
	g++ -c BMI.cpp

clean:
	rm *.o output
