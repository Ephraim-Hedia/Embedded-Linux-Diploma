#include "../include/Point.hpp"
Point::Point() : _x(0), _y(0) {}
Point::Point(int x, int y) : _x(x), _y(y) {}
int Point::GetX(void) const { return _x; }
int Point::GetY(void) const { return _y; }
void Point::SetX(int x) { _x = x; }
void Point::SetY(int y) { _y = y; }
std::ostream &operator<<(std::ostream &os, const Point &p) {
  os << "(X = " << p.GetX() << "  ,  Y = " << p.GetY() << ")";

  return os;
}
std::istream &operator>>(std::istream &os, Point &p) {
  std::cout << "Enter X  : ";
  os >> p._x;
  std::cout << "Enter Y  : ";
  os >> p._y;
  return os;
}
