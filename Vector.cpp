#include <iostream>
#include "Vector.h"
//#include <Point.h>

using namespace std;

Vector::Vector(Point x, Point y)
{
    inic = x;
    fin = y;
}

void Vector::set_puntox(int x, int y)
{
    inic.modify_Point(x,y);
}

void Vector::set_puntoy(int x, int y)
{
    fin.modify_Point(x,y);
}

Point Vector::get_puntox()
{
    return inic;
}

Point Vector::get_puntoy()
{
    return fin;
}

void Vector::modify_Vector(int x, int y, int a, int b)
{
    set_puntox(x,y);
    set_puntoy(a,b);
}

void Vector::print_Vector()
{
    cout <<"("<< inic.get_x() << "," << inic.get_y() << ")" << endl;
    cout << "(" << fin.get_x() << "," << fin.get_y() << ")" <<  endl;
}

