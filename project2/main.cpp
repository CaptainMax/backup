#include <iostream>

using namespace std;

#include "polygon.h"
int main()
{
    polygon po;
    int sides = 0;
    double length = 1.0;
    while(length > 0){
        cout << "please enter the length of polygon enter 0 to exist" << endl;
        cin >> length;
        if(length > 0){
            po.add_side(length);
            sides ++;
            length = 1.0;
        }
        else{
            cout << "the perimeter are " << po.get_perimeter() << endl;
            cout << "the sides are " << po.get_sides() <<endl;
        }

    }


    return 0;
}
