#ifndef POLYGON_H
#define POLYGON_H


class polygon

{
    public:
        polygon();
        void add_side(double length);
        double get_perimeter();
        int get_sides();
        double get_area(double apothem);
    private:
        double  length [10];
        int sides = 0;
};

#endif // POLYGON_H
