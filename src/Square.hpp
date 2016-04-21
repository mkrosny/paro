#pragma once
#include <Shape.hpp>


class Square: public Shape
{
public:
  //    void setHeight(double x){height =x; width =x;}
  //    void setWidth(double x){height =x; width =x;}
  void setSide(double x) side = x;
  double calculateArea(){return side*side;}
protected:
  double side;
};
