#pragma once
#include <Shape.hpp>

class Rectangle:Shape
{
public:
    virtual void setHeight(double x){height =x;}
    virtual void setWidth(double x){width =x;}
    double calculateArea(){return width*height;}

protected:
    double width;
    double height;
};
