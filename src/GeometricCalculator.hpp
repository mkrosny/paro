#pragma once
#include <vector>
#include <memory>
#include <Rectangle.hpp>

typedef std::vector<std::shared_ptr<Shape>> Shapes;

class GeometricCalculator
{
public:
    // GeometricCalculator(Shape shap)
    //     :rectangles(rect)
    // {
    //     initRectangles();
    // }

    double calculateSumArea()
    {
        double sum = 0;

        for(auto rect: shapes)
        {
            sum += rect->calculateArea();
        }
        return sum;
    }
    //private:
    // void initRectangles()
    // {
    //     for(auto rect: shapes)
    //     {
    //         rect->setHeight(10);
    //         rect->setWidth(5);
    //     }
    // }
private:
  vector<Shape> shapes;
};

