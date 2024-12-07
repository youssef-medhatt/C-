#ifndef POINT_H
#define POINT_H

#include <C:\Program Files\CodeBlocks\MinGW\include\graphics.h>

class Point
{
    public:
        Point();
        ~Point();
        Point(int x,int y);
        int getX();
        int getY();
        void setX(int x);
        void setY(int y);
    protected:

    private:
    int x;
    int y;
};

#endif // POINT_H
