output: main.o Vehicle.o Gas_vehicle.o Electric_vehicle.o
	g++ main.o Vehicle.o Gas_vehicle.o Electric_vehicle.o -o output
main.o: main.cpp
	g++ -c main.cpp
Vehicle.o: Vehicle.cpp Vehicle.h
	g++ -c Vehicle.cpp
Gas_vehicle.o: Gas_vehicle.cpp Gas_vehicle.h
	g++ -c Gas_vehicle.cpp
Electric_vehicle.o: Electric_vehicle.cpp Electric_vehicle.h
	g++ -c Electric_vehicle.cpp

clean:
	rm *.o output
