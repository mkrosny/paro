#include <GeometricCalculator.hpp>
#include <Rectangle.hpp>
#include <Square.hpp>
#include <iostream>
#include <memory>


int main()
{
  Shapes shapes;
   shapes.push_back(std::make_shared<Rectangle>());
   //todo: constructors in classes
   shapes.push_back(std::make_shared<Rectangle>());
   shapes.push_back(std::make_shared<Square>());
   shapes.push_back(std::make_shared<Square>());

   GeometricCalculator geometricCalculator(shapes);
   std::cout<<"summed area is equal: " << geometricCalculator.calculateSumArea() << std::endl;

}
