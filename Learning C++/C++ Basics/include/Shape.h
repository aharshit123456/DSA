#ifndef SHAPE_H
#define SHAPE_H


class Shape
{

    protected:
        double height;
        double width;

    public:
        static int numOfShapes;
        Shape(double length);
        Shape(double height, double width);
        Shape();

        virtual ~Shape();
        void SetHeight(double height);
        void SetWidth(double width);
        double GetHeight();
        double GetWidth();
        static int GetNumOfShapes();
        virtual double Area();

};

#endif // SHAPE_H
