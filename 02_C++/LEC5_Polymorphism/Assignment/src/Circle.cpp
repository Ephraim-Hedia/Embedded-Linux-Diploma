#include "../include/Circle.hpp"
#include "../include/Drawable.hpp"
#include "../include/Point.hpp"
#include <cmath>
#include <iostream>

Circle::Circle() : _center(0, 0), _r(0){};
Circle::Circle(int x, int y, int r) : _center(x, y), _r(r) {}
Circle::Circle(Point center, int r) : _center(center), _r(r) {}

void Circle::SetRaduis(int r) { _r = r; }
void Circle::SetCenter(int x, int y) {
  _center.SetX(x);
  _center.SetY(y);
}
void Circle::SetCenter(const Point &p) {
  _center.SetX(p.GetX());
  _center.SetY(p.GetY());
}

int Circle::GetRaduis(void) const { return _r; }
Point Circle::GetCenter(void) const { return _center; }

double Circle::CalulateArea() const {
  double area;
  area = 3.14 * std::pow(_r, 2);

  return area;
};
double Circle::CalulatePerimeter() const {
  double perimeter;
  perimeter = 2 * 3.14 * _r;
  return perimeter;
};

std::ostream &operator<<(std::ostream &os, const Circle &c) {
  os << "Raduis = " << c.GetRaduis() << std::endl;
  os << "Center(X,Y) : " << c.GetCenter() << std::endl;
  os << "Area = " << c.CalulateArea() << std::endl;
  os << "Perimeter = " << c.CalulatePerimeter();
  return os;
}

std::istream &operator>>(std::istream &os, Circle &c) {
  std::cout << "Enter Data of Your Circle : " << std::endl;
  std::cout << "Enter Raduis :";
  os >> c._r;
  std::cout << "Enter Center :" << std::endl;
  os >> c._center;
  return os;
}
