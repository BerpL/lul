#ifndef VECTOR_H
#define VECTOR_H
#include <Point.h>

class Vector
{
    private:
        Point inic;
        Point fin;
    public:
        Vector(Point x, Point y);
        void set_puntox(int , int );
        void set_puntoy(int , int );
        Point get_puntox();
        Point get_puntoy();
        void print_Vector();
        void modify_Vector(int, int, int, int);
};

#endif // VECTOR_H
