// ==> header parient
#include <iostream>
#ifndef TRIANGLE_H
#define TRIANGLE_H

using namespace std;

class Trangle{
	public:
	//defalut constructor
		Trangle();
	//overload constructor
		Trangle(int);
	//descturctor
		~Trangle();

	int getHeight() const;
	void setHeight(int);
	double getArea(int) const;	

	private:
		int height;


};
#endif
