#include "D:\OPEN SOURCE\C++\Day3\pictureProject\include\Line.h"

Line::Line(int x1,int y1,int x2,int y2)
{
       startp = Point(x1,y1);
       endp = Point(x2,y2);

}

Line::~Line()
{
    //dtor
}

void Line::draw(){
line(startp.getX(),startp.getY(),endp.getX(),endp.getY());
}
