#include <DrawingLibrary.hpp>
#include <PicturesLibrary.hpp>
#include <Adapters/Adapters.hpp>

int main()
{
    PicturesLibrary::Picture picture;
    DrawingLibrary::Rectangle rectangle;

    AdapterSquare adaptedSquare(rectangle);
    AdapterRectangle adaptedRectangle(rectangle);

    picture.drawPicture(rectangle, rectangle); //this code could not be compiled.
                                               //Try to adapt rectangle to allow use in PicturesLibrary
}
