#include "Drawable.hpp"
#include "Point.hpp"
class Triangle : public Drawable {

public:
  Triangle();
  Triangle(Point p1, Point p2, Point p3);

  Point GetPoint1(void) const;
  Point GetPoint2(void) const;
  Point GetPoint3(void) const;

  void SetPoint1(const Point &p);
  void SetPoint2(const Point &p);
  void SetPoint3(const Point &p);

  double CalulateArea() const override;
  double CalulatePerimeter() const override;

  friend std::ostream &operator<<(std::ostream &os, const Triangle &t);
  friend std::istream &operator>>(std::istream &os, Triangle &t);

private:
  Point _p1, _p2, _p3;
};