#ifndef RECTANGE_H
#define RECTANGE_H
#include "Point.h"
#include "Shape.h"

#include <C:\Program Files\CodeBlocks\MinGW\include\graphics.h>

class Rectange:public Shape
{
    public:
        Rectange(int x1,int y1,int x2,int y2,int c);
        ~Rectange();
        void draw();

        Point GetUl() { return ul; }
        void SetUl(Point val) { ul = val; }
        Point GetLr() { return lr; }
        void SetLr(Point val) { lr = val; }

    protected:

    private:
        Point ul;
        Point lr;
};

#endif // RECTANGE_H
