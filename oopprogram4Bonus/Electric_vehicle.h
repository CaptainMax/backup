#ifndef ELECTRIC_VEHICLE_H
#define ELECTRIC_VEHICLE_H

#include "Vehicle.h"
#include <exception>

class Electric_vehicle : public Vehicle{

	public:
		Electric_vehicle();
		Electric_vehicle(int, std::string, std::string, Body_style, double, double);
		double kwh_consumed(double miles = 100);
	private:
		double miles_per_kwh;
		double max_kwh;
		
};
#endif
