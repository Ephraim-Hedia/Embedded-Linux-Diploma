#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_
#include "../include/Drawable.hpp"
#include "../include/Point.hpp"
class Circle : public Drawable {
public:
  Circle();
  Circle(Point center, int r);
  Circle(int x, int y, int r);

  void SetRaduis(int r);
  void SetCenter(int x, int y);
  void SetCenter(const Point &p);

  int GetRaduis(void) const;
  Point GetCenter(void) const;

  double CalulateArea() const override;
  double CalulatePerimeter() const override;
  friend std::ostream &operator<<(std::ostream &os, const Circle &c);
  friend std::istream &operator>>(std::istream &os, Circle &c);

private:
  int _r;
  Point _center;
};
#endif