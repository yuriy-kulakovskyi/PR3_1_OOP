#pragma once
#include "Triangle.h"

class RightAngled : public Triangle {
private:
  double area;

public:
  RightAngled(double a = 1, double b = 1);
  void calculateArea();
  double getArea() const;

  operator std::string() const;

  RightAngled& operator=(const RightAngled& other);
  RightAngled& operator++();
  RightAngled operator++(int);
  RightAngled& operator--();
  RightAngled operator--(int);

  friend std::istream& operator>>(std::istream& in, RightAngled& vec);
  friend std::ostream& operator<<(std::ostream& out, const RightAngled& vec);
};
