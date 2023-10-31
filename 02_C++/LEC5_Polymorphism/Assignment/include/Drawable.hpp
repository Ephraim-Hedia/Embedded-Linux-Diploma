#ifndef DRAWABLE_HPP_
#define DRAWABLE_HPP_
class Drawable {
public:
  virtual double CalulateArea() const = 0;
  virtual double CalulatePerimeter() const = 0;
};
#endif