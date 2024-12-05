#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include <C:\Program Files\CodeBlocks\MinGW\include\graphics.h>

class Line
{
    public:
        Line(int x1,int y1,int x2,int y2);
        ~Line();
        void draw();

        Point Getstartp() { return startp; }
        void SetStartp(Point val) { startp = val; }
        Point Getendp() { return endp; }
        void SetEndp(Point val) { endp = val; }

    protected:

    private:
        Point startp;
        Point endp;
};

#endif // LINE_H
