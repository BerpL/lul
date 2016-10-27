#include <iostream>
#include "Point.h"

using namespace std;
Point::Point()
{
    posx = 0;
    posy = 0;
}

Point::Point(int x, int y)
{
    posx = x;
    posy = y;
}

Point::Point(Point &p){
	posx = p.get_x();
    posy = p.get_y();
}

int Point::get_x()
{
    return posx;
}

int Point::get_y()
{
    return posy;
}

void Point::set_x(int x)
{
    posx = x;
}

void Point::set_y(int y)
{
    posy = y;
}

void Point::print_Point()
{
    cout << posx << "," << posy << endl;
}

void Point::modify_Point(int x, int y)
{
    set_x(x);
    set_y(y);
}

