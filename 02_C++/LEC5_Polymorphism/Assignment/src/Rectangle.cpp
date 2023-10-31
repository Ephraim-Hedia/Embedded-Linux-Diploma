#include "../include/Rectangle.hpp"
#include <iostream>
Rectangle::Rectangle()
    : _l(0), _w(0), _p1(0, 0), _p2(0, 0), _p3(0, 0), _p4(0, 0) {}

Rectangle::Rectangle(int l, int w) : _l(l), _w(w) {
  _p1.SetX(0);
  _p1.SetY(0);
  //===================
  _p2.SetX(_w);
  _p2.SetY(0);
  //===================
  _p3.SetX(0);
  _p3.SetY(_l);
  //===================
  _p4.SetX(_w);
  _p4.SetY(_l);
  //===================
}
Rectangle::Rectangle(Point p1, Point p3) : _p1(p1), _p3(p3) {
  _p4.SetY(_p3.GetY());
  _p4.SetX(_p1.GetX());
  //===================
  _p2.SetX(_p3.GetX());
  _p2.SetY(_p1.GetY());
  //===================
  UpdataDimensions();
}

Point Rectangle::GetPoint1(void) const { return _p1; }
Point Rectangle::GetPoint2(void) const { return _p2; }
Point Rectangle::GetPoint3(void) const { return _p3; }
Point Rectangle::GetPoint4(void) const { return _p4; }

void Rectangle::SetPoint1(const Point &p) {
  _p1.SetX(p.GetX());
  _p1.SetY(p.GetY());

  _p4.SetX(p.GetX());
  _p2.SetY(p.GetY());

  UpdataDimensions();
}
void Rectangle::SetPoint2(const Point &p) {
  _p2.SetX(p.GetX());
  _p2.SetY(p.GetY());

  _p3.SetX(p.GetX());
  _p1.SetY(p.GetY());

  UpdataDimensions();
}
void Rectangle::SetPoint3(const Point &p) {
  _p3.SetX(p.GetX());
  _p3.SetY(p.GetY());

  _p2.SetX(p.GetX());
  _p4.SetY(p.GetY());
  UpdataDimensions();
}
void Rectangle::SetPoint4(const Point &p) {
  _p4.SetX(p.GetX());
  _p4.SetY(p.GetY());

  _p1.SetX(p.GetX());
  _p3.SetY(p.GetY());
  UpdataDimensions();
}
void Rectangle::UpdataDimensions(void) {
  _l = _p4.GetY() - _p1.GetY();
  _w = _p2.GetX() - _p1.GetX();
}

void Rectangle::SetLength(int l) { _l = l; }
void Rectangle::SetWidth(int w) { _w = w; }

int Rectangle::GetLength(void) const { return _l; }
int Rectangle::GetWidth(void) const { return _w; }

double Rectangle::CalulateArea() const {
  double area;
  area = _l * _w;
  return area;
}
double Rectangle::CalulatePerimeter() const {
  double perimeter;
  perimeter = 2 * (_l + _w);
  return perimeter;
}

std::ostream &operator<<(std::ostream &os, const Rectangle &r) {
  os << "Points of the Rectangle :" << std::endl;
  os << "Point 1 :" << r._p1 << std::endl
     << "Point 2 :" << r._p2 << std::endl
     << "Point 3 :" << r._p3 << std::endl
     << "Point 4 :" << r._p4 << std::endl;
  os << "The Length and The Width for the Rectangle :" << std::endl;
  os << "(Length = " << r._l << "  ,  Width =" << r._w << ")" << std::endl;
  os << "Area = " << r.CalulateArea() << std::endl;
  os << "Perimeter = " << r.CalulatePerimeter();
  return os;
}

std::istream &operator>>(std::istream &os, Rectangle &r) {
  std::cout << "Enter the Data of Your Rectangle : " << std::endl;
  std::cout << "Enter Point 1 :" << std::endl;
  os >> r._p1;
  std::cout << "Enter Point 2 :" << std::endl;
  os >> r._p2;
  std::cout << "Enter Point 3 :" << std::endl;
  os >> r._p3;
  std::cout << "Enter Point 4 :" << std::endl;
  os >> r._p4;
  std::cout << "The Data Enter Successfully" << std::endl;
  r.UpdataDimensions();
  return os;
}
