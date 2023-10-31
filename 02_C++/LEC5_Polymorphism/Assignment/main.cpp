#include "include/Circle.hpp"
#include "include/Drawable.hpp"
#include "include/Point.hpp"
#include "include/Rectangle.hpp"
#include "include/Triangle.hpp"
#include <cmath>
#include <iostream>

void Drawing(Drawable *image) {

  std::cout << std::endl << "From Drawing Function " << std::endl;
  std::cout << "Area = " << image->CalulateArea() << std::endl;
  std::cout << "Perimeter = " << image->CalulatePerimeter() << std::endl;
}
int main(int argc, const char **argv) {

  Drawable *d;
  //========================================================================
  // Testing The method
  // Point centerOfCircle(2, 3);
  // int RaduisOfCircle = 5;
  // Circle c{centerOfCircle, RaduisOfCircle};
  // std::cout << "======================================" << std::endl;
  // std::cout << c << std::endl;
  // std::cout << "======================================" << std::endl;
  //========================================================================
  Circle c2;
  std::cin >> c2;
  std::cout << "======================================" << std::endl;
  std::cout << c2 << std::endl;
  d = &c2;
  Drawing(d);
  std::cout << "======================================" << std::endl;
  //========================================================================
  // Testing The method
  // Point Point1(2, 3);
  // Point Point3(9, 10);
  // Rectangle r(Point1, Point3);
  // std::cout << r << std::endl;
  // std::cout << "=============================" << std::endl;
  // Point Point2(10, 3);
  // r.SetPoint2(Point2);
  // std::cout << r << std::endl;
  // std::cout << "=============================" << std::endl;
  //========================================================================
  Rectangle r2;
  std::cin >> r2;
  std::cout << "=============================" << std::endl;
  std::cout << r2 << std::endl;
  d = &r2;
  Drawing(d);
  std::cout << "=============================" << std::endl;
  //========================================================================
  // Testing The method
  // Point Point1(0, 0);
  // Point Point2(1, 3);
  // Point Point3(2, 5);

  // Triangle t1(Point1, Point2, Point3);
  // std::cout << t1 << std::endl;
  // std::cout << "=============================" << std::endl;
  //========================================================================
  Triangle t2;
  std::cin >> t2;
  std::cout << "=============================" << std::endl;
  std::cout << t2 << std::endl;
  d = &t2;
  Drawing(d);
  std::cout << "=============================" << std::endl;

  //========================================================================
  Drawable *arr[3] = {&c2, &r2, &t2};
  for (auto i : arr)
    Drawing(i);

  return 0;
}

// g++ LEC5_Polymorphism/Assignment/main.cpp
// LEC5_Polymorphism/Assignment/src/Drawable.cpp
// LEC5_Polymorphism/Assignment/src/Point.cpp
// LEC5_Polymorphism/Assignment/src/Circle.cpp
// LEC5_Polymorphism/Assignment/src/Rectangle.cpp
// LEC5_Polymorphism/Assignment/src/Triangle.cpp

// For Test the Concept
// class Drawable {
// public:
//   virtual void draw() = 0;
// };
// class Shape : public Drawable {
// public:
//   void draw() { std::cout << "Shape Draw" << std::endl; }
// };
// class Circle : public Shape {
// public:
//   void draw() { std::cout << "Circle Draw" << std::endl; }
// };
// class Rectangle : public Shape {
// public:
//   void draw() { std::cout << "Rectangle Draw" << std::endl; }
// };
// class Triangle : public Shape {
// public:
//   void draw() { std::cout << "Triangle Draw" << std::endl; }
// };

// void Drawing(Drawable &image) { image.draw(); }
// int main(int argc, const char **argv) {

//   Circle c;
//   Rectangle r;
//   Triangle t;
//   Drawing(c);
//   Drawing(r);
//   Drawing(t);

//   return 0;
// }
