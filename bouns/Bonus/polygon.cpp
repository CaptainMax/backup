#include "polygon.h"

polygon::polygon()
{

}
void polygon :: add_side(double length){
        length += length;
        sides ++;
}
double polygon :: get_perimeter(){
        return  length;
}
int polygon :: get_sides(){
        return sides;
}
double polygon :: get_area(double apothem){
        return  0.5 * apothem * length
