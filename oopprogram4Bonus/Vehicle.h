// headfile ==> parient
#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <vector>
#include <string>
#include <map>
class Vehicle{
	public:
	
		enum class Body_style {SEDAN, HATCHBACK, MINIVAN, TRUCK, SUV, CROSSOVER};
		Vehicle(int, std::string, std::string, Body_style);
		

		std::string getMake();
		std::string getModel();
		int getYeal();

		std::string to_string();
	
	private:
		std::string make;
		std::string model;
		int yeal;
		Body_style body_style;

};
#endif