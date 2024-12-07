#include "D:\OPEN SOURCE\C++\Day3\pictureProject\include\Circle.h"
#include "D:\OPEN SOURCE\C++\Day3\pictureProject\include\Point.h"
#include <C:\Program Files\CodeBlocks\MinGW\include\graphics.h>
#include <iostream>
using namespace std;
Circle::Circle(int x,int y,int r,int c):Shape(c)
{
    this->c = Point(x,y);
    t = r;
}

Circle::~Circle()
{
    //dtor
}
void Circle::draw(){
    cout << "Circle: "<< c.getX() << " " << c.getY() << " " << t << " Color " << GetColor() << endl;
}
