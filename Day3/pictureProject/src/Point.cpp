#include "Point.h"

Point::Point()
{
    x = 0;
    y = 0;
}
Point::Point(int x,int y)
{
    this->x = x;
    this->y = y;
}
void Point::setX(int x){
    this->x = x;
}
void Point::setY(int y){
    this->y = y;
}
int Point::getX(){
return x;
}
int Point::getY(){
return y;
}
Point::~Point()
{
    //dtor
}
