#ifndef GAS_VEHICLE_H
#define GAS_VEHICLE_H

#include <exception>
#include <stdexcept> 
#include "Vehicle.h"

class Gas_vehicle : public Vehicle{

	public :
		Gas_vehicle(int, std::string, std::string, Body_style, double, double);
		double gallons_consumed(double miles = 100);
	private :
		double miles_per_gallon;
		double max_gallons;
		double miles;

};
#endif
