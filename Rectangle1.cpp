#include "Rectangle.h"

// put in the code for the constructors
// Constructor takes point and initializes with default width and height of 0
Rectangle::Rectangle(Point p) : topLeft(p) {
  width = 0;
  height = 0;
}

// Constructor takes a Point and specific width and height values
Rectangle::Rectangle(Point p, double w, double h) : topLeft(p) {
  width = w;
  height = h;
}

void Rectangle::set_width(double w) { width = w; }
void Rectangle::set_height(double h) { height = h; }
double Rectangle::get_width() { return width; }
double Rectangle::get_height() { return height; }
double Rectangle::area()
{
  return width * height;
}
double Rectangle::perimeter()
{
  return 2 * (width + height);
} 
void Rectangle::set_values(double x, double y)
{
  width = x;
  height = y;
}
