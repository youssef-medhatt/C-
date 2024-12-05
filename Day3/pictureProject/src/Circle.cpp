#include "D:\OPEN SOURCE\C++\Day3\pictureProject\include\Circle.h"
#include "D:\OPEN SOURCE\C++\Day3\pictureProject\include\Point.h"
Circle::Circle(int x,int y,int r)
{
    c = Point(x,y);
    t = r;
}

Circle::~Circle()
{
    //dtor
}
void Circle::draw(){
circle(c.getX(),c.getY(),t);
}
