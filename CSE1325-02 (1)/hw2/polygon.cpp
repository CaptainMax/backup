#include "polygon.h"

polygon::polygon()
{

}
void polygon :: add_side(double length){
        perimeter += length;
        sides ++;
}
double polygon :: get_perimeter(){
        return  perimeter;
}
int polygon :: get_sides(){
        return sides;
}
