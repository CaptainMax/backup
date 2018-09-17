#include "Vehicle.h"

Vehicle::Vehicle(int newYeal, std::string newMake, std::string newModel, Body_style body){
	yeal = newYeal;
	make = newMake;
	model= newModel;
	body_style = body;

}

std::string Vehicle::getMake(){
	return make;
}
std::string Vehicle::getModel(){
	return model;
}
int Vehicle::getYeal(){
	return yeal;
}

std::string Vehicle::to_string(){
	std::map<Body_style, std::string> b_to_str =
	{
		{Body_style::SEDAN, "SEDAN"},
		{Body_style::HATCHBACK, "HATCHBACK"},
		{Body_style::MINIVAN, "MINIVAN"},
		{Body_style::TRUCK, "TRUCK"},
		{Body_style::SUV, "SUV"},
		{Body_style::CROSSOVER, "CROSSOVER"}
	};
	return b_to_str[body_style];
}
