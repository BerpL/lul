#include <iostream>
#ifndef POINT_H
#define POINT_H

using namespace std;

class Point
{
    private:
        int posx;
        int posy;
    public:
        Point();
        Point(int, int);
        Point(Point &p);
        void set_x(int);
        void set_y(int);
        int get_x();
        int get_y();
        void print_Point();
        void modify_Point(int, int);
};

#endif // POINT_H
