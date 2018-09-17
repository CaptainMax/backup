#include "Gas_vehicle.h"

Gas_vehicle::Gas_vehicle(int newYeal, std::string newMake, std::string newModel, Body_style body, double newMiles, double newMax)
	:Vehicle(newYeal, newMake, newModel, body){
	miles_per_gallon = newMiles;
	max_gallons = newMax;

}
double Gas_vehicle::gallons_consumed(double miles){
	int result = miles / miles_per_gallon;
     try{
		
		if(result > max_gallons) throw std::runtime_error{"out of oil"};
		
	
	} catch (std::exception &e){
	}
		
	return result;	

}
