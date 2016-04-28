#include <DrawingLibrary.hpp>
#include <PicturesLibrary.hpp>

// define here classes which adapt DrawingLibrary::Rectangle class to PicturesLibrary specific classes

class AdapterRectangle: public PictureLibrary::Rectangle
{
        public:
    AdapterRectangle(DrawingLibrary::Rectangle rec);
    void draw(int x1, int y1, int x2, int y2){
    rec.draw(x1,y1,x2,y2)
    }
        private:
    DrawingLibrary::Rectangle rec;
};

class AdapterSquare
{
};


