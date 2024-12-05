#include "Picture.h"

Picture::Picture(int lc,int rc,int cc,Line *lptr,Rectange *rptr,Circle *cptr)
{
    lineCounter = lc;
    rectangleCounter = rc;
    circleCounter = cc;
    linePtr = lptr;
    rectanlgePtr = rptr;
    circlePtr = cptr;
}
Picture::Picture()
{
    lineCounter = 0;
    rectangleCounter = 0;
    circleCounter = 0;
    linePtr = nullptr;
    rectanlgePtr = nullptr;
    circlePtr = nullptr;
}

Picture::~Picture()
{
    //dtor
}

void Picture::paint(){
for(int i = 0; i<lineCounter;i++ ){
    linePtr[i].draw();
}
for(int i = 0; i<rectangleCounter;i++ ){
    rectanlgePtr[i].draw();
}
for(int i = 0; i<circleCounter;i++ ){
    circlePtr[i].draw();
}
}
