#include "D:\OPEN SOURCE\C++\Day3\pictureProject\include\Line.h"
#include <C:\Program Files\CodeBlocks\MinGW\include\graphics.h>
#include <iostream>
using namespace std;
Line::Line(int x1,int y1,int x2,int y2,int c):Shape(c)
{
       startp = Point(x1,y1);
       endp = Point(x2,y2);

}

Line::~Line()
{
    //dtor
}

void Line::draw(){
    int x1 = startp.getX();
    int x2 = endp.getX();
    int y1 = startp.getY();
    int y2 = endp.getY();

cout<<"Line: " << x1 << " " <<y1<< " " <<endp.getX()<< " " <<y2<<" Color " <<GetColor() <<endl;
}
