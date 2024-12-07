#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
        Shape(int c);
        ~Shape();

        int GetColor() { return color; }
        void SetColor(int val) { color = val; }

    protected:

    private:
        int color;
};

#endif // SHAPE_H
