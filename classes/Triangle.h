#pragma once
#include <iostream>
#include <cmath>
#include <sstream>

class Triangle {
protected:
  double a, b, c;

public:
  Triangle(double a = 1, double b = 1, double c = 1);
  Triangle(const Triangle& other);

  double getA() const;
  double getB() const;
  double getC() const;
  void setA(double a);
  void setB(double b);
  void setC(double c);
  void setSides(double a, double b, double c);

  double getArea() const;
  void getAngles(double& alpha, double& beta, double& gamma) const;

  std::string to_string() const;
  operator std::string() const;

  Triangle& operator++();
  Triangle operator++(int);
  Triangle& operator--();
  Triangle operator--(int);
  Triangle& operator=(const Triangle& other);

  friend std::istream& operator>>(std::istream& in, Triangle& triangle);
  friend std::ostream& operator<<(std::ostream& out, const Triangle& triangle);
};
