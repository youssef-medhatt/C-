#include "D:\OPEN SOURCE\C++\Day3\pictureProject\include\Rectange.h"

Rectange::Rectange(int x1,int y1,int x2,int y2)
{
       ul = Point(x1,y1);
       lr = Point(x2,y2);

}

Rectange::~Rectange()
{
    //dtor
}

void Rectange::draw(){
rectangle(ul.getX(),ul.getY(),lr.getX(),lr.getY());
}
