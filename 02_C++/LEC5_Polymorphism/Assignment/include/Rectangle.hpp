#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_
#include "../include/Drawable.hpp"
#include "../include/Point.hpp"

class Rectangle : public Drawable {
public:
  Rectangle();
  Rectangle(int l, int w);
  Rectangle(Point p1, Point p3);

  Point GetPoint1(void) const;
  Point GetPoint2(void) const;
  Point GetPoint3(void) const;
  Point GetPoint4(void) const;

  void SetPoint1(const Point &p);
  void SetPoint2(const Point &p);
  void SetPoint3(const Point &p);
  void SetPoint4(const Point &p);

  void SetLength(int l);
  void SetWidth(int w);

  int GetLength(void) const;
  int GetWidth(void) const;

  double CalulateArea() const override;
  double CalulatePerimeter() const override;

  friend std::ostream &operator<<(std::ostream &os, const Rectangle &r);
  friend std::istream &operator>>(std::istream &os, Rectangle &r);

private:
  int _l, _w;
  Point _p1, _p2, _p3, _p4;
  void UpdataDimensions(void);
};

#endif