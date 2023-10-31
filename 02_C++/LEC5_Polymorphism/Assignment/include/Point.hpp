#ifndef POINT_HPP_
#define POINT_HPP_
#include <iostream>

class Point {
public:
  Point();
  Point(int x, int y);

  void SetX(int x);
  void SetY(int y);

  int GetX(void) const;
  int GetY(void) const;

  friend std::ostream &operator<<(std::ostream &os, const Point &p);
  friend std::istream &operator>>(std::istream &os, Point &p);

private:
  int _x, _y;
};

#endif