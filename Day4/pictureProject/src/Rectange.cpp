#include "D:\OPEN SOURCE\C++\Day3\pictureProject\include\Rectange.h"
#include <C:\Program Files\CodeBlocks\MinGW\include\graphics.h>
#include <iostream>
using namespace std;
Rectange::Rectange(int x1,int y1,int x2,int y2,int c):Shape(c)

{
       ul = Point(x1,y1);
       lr = Point(x2,y2);

}

Rectange::~Rectange()
{
    //dtor
}

void Rectange::draw(){
cout <<"Rectangle: "<< ul.getX() << " " <<ul.getY()<< " " <<lr.getX()<< " " <<lr.getY()<<" Color "<<GetColor()<<endl;
}
