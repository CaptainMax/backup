#include <iostream>

using namespace std;


int main()
{
    	int i = 0;
	int &j = i;
	j++;
	i++;
	cout <<"i" << i <<endl;
	cout <<	"j" << j << endl;
	
}

