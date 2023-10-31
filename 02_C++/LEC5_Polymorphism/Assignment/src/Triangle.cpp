#include "../include/Triangle.hpp"
#include "../include/Drawable.hpp"
#include "../include/Point.hpp"
#include <cmath>
#include <iostream>

Triangle::Triangle() : _p1(0, 0), _p2(0, 0), _p3(0, 0) {}
Triangle::Triangle(Point p1, Point p2, Point p3) : _p1(p1), _p2(p2), _p3(p3) {}

Point Triangle::GetPoint1(void) const { return this->_p1; }
Point Triangle::GetPoint2(void) const { return this->_p2; }
Point Triangle::GetPoint3(void) const { return this->_p3; }

void Triangle::SetPoint1(const Point &p) {
  _p1.SetX(p.GetX());
  _p1.SetY(p.GetY());
}
void Triangle::SetPoint2(const Point &p) {
  _p2.SetX(p.GetX());
  _p2.SetY(p.GetY());
}
void Triangle::SetPoint3(const Point &p) {
  _p3.SetX(p.GetX());
  _p3.SetY(p.GetY());
}

double Triangle::CalulateArea() const {
  double area;
  double a, b, c, s;
  a = std::sqrt(std::pow((_p1.GetX() - _p2.GetX()), 2) +
                std::pow((_p1.GetY() - _p2.GetY()), 2));
  b = std::sqrt(std::pow((_p2.GetX() - _p3.GetX()), 2) +
                std::pow((_p2.GetY() - _p3.GetY()), 2));
  c = std::sqrt(std::pow((_p1.GetX() - _p3.GetX()), 2) +
                std::pow((_p1.GetY() - _p3.GetY()), 2));
  s = 0.5 * (a + b + c);
  area = std::sqrt(s * (s - a) * (s - b) * (s - c));
  return area;
}
double Triangle::CalulatePerimeter() const {
  double perimeter;
  double a, b, c;
  a = std::sqrt(std::pow((_p1.GetX() - _p2.GetX()), 2) +
                std::pow((_p1.GetY() - _p2.GetY()), 2));
  b = std::sqrt(std::pow((_p2.GetX() - _p3.GetX()), 2) +
                std::pow((_p2.GetY() - _p3.GetY()), 2));
  c = std::sqrt(std::pow((_p1.GetX() - _p3.GetX()), 2) +
                std::pow((_p1.GetY() - _p3.GetY()), 2));

  perimeter = a + b + c;
  return perimeter;
}

std::ostream &operator<<(std::ostream &os, const Triangle &t) {
  os << "Points of the Triangle :" << std::endl;
  os << "Point 1 :" << t._p1 << std::endl
     << "Point 2 :" << t._p2 << std::endl
     << "Point 3 :" << t._p3 << std::endl;

  os << "Area = " << t.CalulateArea() << std::endl;
  os << "Perimeter = " << t.CalulatePerimeter();

  return os;
}
std::istream &operator>>(std::istream &os, Triangle &t) {
  std::cout << "Enter the Data of Your Triangle : " << std::endl;
  std::cout << "Enter Point 1 :" << std::endl;
  os >> t._p1;
  std::cout << "Enter Point 2 :" << std::endl;
  os >> t._p2;
  std::cout << "Enter Point 3 :" << std::endl;
  os >> t._p3;

  return os;
}