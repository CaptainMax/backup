//JianMa 1001532967
//cse 1325 - 001 
//project04 full credit part

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Gas_vehicle.h"
#include "Electric_vehicle.h"
using namespace std;

void CalPrice(double, std::vector<double>);
//calprice read in the 100 miles need electricity/oil data and read different and calculate the total spend money  
void printElcPrice(std::vector<double>&, std::vector<double>&);
//print total spend money base on different type price

void oilPrice(double, std::vector<double>);
void printOilPrice(std::vector<double>&, std::vector<double>&);
int main(){
	
	ifstream inEleFile;
	inEleFile.open("edata.txt");

	if(inEleFile.fail()){
		cerr << "Error open file" << endl;
		exit(1);
	} 

	// This is electrict car part
	while(!inEleFile.eof()){
		std::vector<Electric_vehicle> evs = {
			inEleFile << Electric_vehicle;
		};

	}
	
		

	std::vector<double> eleprice  = {0.05, 0.08, 0.11, 0.13, 0.15};
	
	for(int x = 0; x < evs.size(); x++){
		double data1 = evs[x].kwh_consumed();
		cout << evs[x].getYeal() << " " << evs[x].getMake() << " " << evs[x].getModel() << " " << evs[x].to_string() << " costs per: 100 miles:" << endl;
		CalPrice(data1, eleprice);
	}
	
	ifstream inoilFile;
	inoilFile.open("odata.txt");

	if(inoilFile.fail()){
		cerr << "Error open file" << endl;
		exit(1);
	}

	while(!inoFile.eof()){
		std::vector<Gas_vehicle> ice = {
			inoFile << Gas_vehicle;
		};
			
	}

	// This is oil car part
	//std::vector<Gas_vehicle> ice = {
	//	Gas_vehicle  {2017, "Toyota", "RAV4", 	 Gas_vehicle::Body_style::CROSSOVER, 26, 15.9},
	//	Gas_vehicle  {2018, "Ford", "F-150", 	 Gas_vehicle::Body_style::TRUCK, 21, 36},
	//	Gas_vehicle  {2018, "Nissan", "Rogue",   Gas_vehicle::Body_style::HATCHBACK, 29, 14.5},
	//	Gas_vehicle  {2018, "Chrysler", "Pacifica",   Gas_vehicle::Body_style::MINIVAN, 22, 19},
		// this for erro checking
		//Gas_vehicle  {2018, "This shouble be error", "error",   Gas_vehicle::Body_style::MINIVAN, 1, 1},
	
	//
	
	std::vector<double> oilprice = {2.00, 2.25, 2.50, 3.00, 4.00};
	for(int y = 0; y < ice.size(); y++){
		double data2 = ice[y].gallons_consumed();
		cout << ice[y].getYeal() << " " << ice[y].getMake() << " " << ice[y].getModel() << " " << ice[y].to_string() << " costs per: 100 miles:" << endl;
		CalPrice(data2, oilprice);
	}
	
}	

void CalPrice(double data, std::vector<double> price){
	std::vector<double> ve;
	for(int i = 0; i < price.size(); i++){
		ve.push_back(data * price[i]);
	}
	std::vector<double> needprice;
	for(int j = 0; j < price.size(); j++){
		needprice.push_back(price[j]);
	}
	
	printElcPrice(ve, needprice);

}
void printElcPrice(std::vector<double>& elcp, std::vector<double>& price){
	
	for(int i = 0; i < elcp.size(); i++){
		cout << "\tat $ " << price[i] << " per kwh -> $" << elcp[i] << endl;
	}
}

void oilPrice(double data, std::vector<double> price){
	std::vector<double> oil;
	for(int i = 0; i < price.size(); i++){
		oil.push_back(data * price[i]);
	}
	std::vector<double> oilneedprice;
	for(int j = 0; j < price.size(); j++){
		oilneedprice.push_back(price[j]);
	}
	
	printOilPrice(oil, oilneedprice);

}
void printOilPrice(std::vector<double>& oilcp, std::vector<double>& price){
	
	for(int i = 0; i < oilcp.size(); i++){
		cout << "\tat $ " << price[i] << " miles per gallon -> $" << oilcp[i] << endl;
	}
}
