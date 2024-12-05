#ifndef PICTURE_H
#define PICTURE_H
#include"Point.h"
#include "Line.h"
#include"Rectange.h"
#include "Circle.h"
#include <C:\Program Files\CodeBlocks\MinGW\include\graphics.h>

class Picture
{
    public:
        Picture();
        Picture(int lc,int rc,int cc,Line *lptr,Rectange *rptr,Circle *cptr);
       ~Picture();
        void paint();

        int Getlc() { return lineCounter; }
        void Setlc(int val) { lineCounter = val; }
        int Getrc() { return rectangleCounter; }
        void Setrc(int val) { rectangleCounter = val; }
        int Getcc() { return circleCounter; }
        void Setcc(int val) { circleCounter = val; }
        Line GetlinePtr() { return *linePtr; }
        void SetlinePtr(Line* val) { linePtr = val; }
        Rectange GetrectanlgePtr() { return *rectanlgePtr; }
        void SetrectanlgePtr(Rectange* val) { rectanlgePtr = val; }
        Circle GetcirclePtr() { return *circlePtr; }
        void SetcirclePtr(Circle* val) { circlePtr = val; }

    protected:

    private:
        int lineCounter;
        int rectangleCounter;
        int circleCounter;
        Line *linePtr;
        Rectange *rectanlgePtr;
        Circle *circlePtr;
};

#endif // PICTURE_H
