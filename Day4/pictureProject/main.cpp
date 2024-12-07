#include <iostream>
#include <D:\OPEN SOURCE\C++\Day3\pictureProject\include\Point.h>
#include <D:\OPEN SOURCE\C++\Day3\pictureProject\include\Line.h>
#include <D:\OPEN SOURCE\C++\Day3\pictureProject\include\Rectange.h>
#include <D:\OPEN SOURCE\C++\Day3\pictureProject\include\Circle.h>
#include <D:\OPEN SOURCE\C++\Day3\pictureProject\include\Picture.h>
#include <C:\Program Files\CodeBlocks\MinGW\include\graphics.h>

using namespace std;

// Simple Main()
int main()
{
    // Graphic Mode
    Picture myPic;

    Circle cArr[3] = {Circle(50, 50, 50,10), Circle(200, 100, 100,10), Circle(420, 50, 30,10)};
    Rectange rArr[2] = {Rectange(30, 40, 170, 100,20), Rectange(420, 50, 500, 300,20)};
    Line lArr[2] = {Line(420, 50, 300, 300,30), Line(40, 500, 500, 400,30)};

    myPic.Setlc(2);
    myPic.Setcc(3);
    myPic.Setrc(2);
    myPic.SetlinePtr(lArr);
    myPic.SetrectanlgePtr(rArr);
    myPic.SetcirclePtr(cArr);
    myPic.paint();



    return 0;
}

