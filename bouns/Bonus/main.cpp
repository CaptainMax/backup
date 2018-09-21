//Jian Ma
//1001532967
//CSE1325 - 001
//project02 -- bonus

#include <iostream>

using namespace std;

#include "polygon.h"
int main()
{
    int i;
    polygon po;
    double apothem = 0.0;
    int sides = 0;
    double  length [10];

        cout << "please enter the length of polygon enter 0 to exist" << endl;
        for(i = 0; i < 10; i++){
             while(length > 0){
              cin >> length[i];
        if(length > 0){
            po.add_side(length[i]);

        }
        else{
            cout << "Please enter the apothem " << endl;
            cin >> apothem;
            cout << "the area is" << po.get_area(apothem) << endl;
            cout << "the perimeter are " << po.get_perimeter() << endl;
            cout << "the sides are " << po.get_sides() <<endl;
        }

    }

        }



    return 0;
}
