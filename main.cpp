#include <iostream>
#include <stdio.h>
#include <Point.h>
#include <Vector.h>
#include <ArrayPoint.h>

using namespace std;

int main()
{
    Point p1(2,3);
    Point p2(11,5);
    Point p3(5,7);
    Point p4(9,4);
    Point p5(10,7);
    Point p6(4,8);
    Point vp[] = {p1,p2,p3};
    Point vp1[] = {p3,p4,p5,p6};
    p1.modify_Point(5,10);
    p1.print_Point();
    Vector v1(p1,p2);
    v1.modify_Vector(1,1,2,2);
    v1.print_Vector();


    // ArrayPoint
    ArrayPoint ar1(vp,3);
    ar1.printArrayPoint();
    ar1.myremove(1);
    ar1.printArrayPoint();

}
// hacer una implementacion de un programa cualquiera que contengan listas, colas, pilas y vectores.

