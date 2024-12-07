#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include "Shape.h"
#include <C:\Program Files\CodeBlocks\MinGW\include\graphics.h>


class Circle:public Shape
{
    public:
        Circle(int x,int y,int r,int c);
        ~Circle();
        void draw();

        Point GetC() { return c; }
        void Set(Point val) { c = val; }
        int GetT() { return t; }
        void Set(int val) { t = val; }

    protected:

    private:
        Point c;
        int t;
};

#endif // CIRCLE_H
