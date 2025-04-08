#include "RightAngled.h"

RightAngled::RightAngled(double a, double b) : Triangle(a, b, sqrt(a* a + b * b)) {
    calculateArea();
}

void RightAngled::calculateArea() {
    area = (a * b) / 2;
}

double RightAngled::getArea() const { return area; }


RightAngled::operator std::string() const {
    std::stringstream ss;
    ss << "Right-Angled Triangle: sides(" << a << ", " << b << ", " << c << "), area: " << area;
    return ss.str();
}

RightAngled& RightAngled::operator=(const RightAngled& other) {
    if (this != &other) {
        Triangle::operator=(other);
        area = other.area;
    }
    return *this;
}


RightAngled& RightAngled::operator++() {
    ++a; ++b; ++c;
    calculateArea();
    return *this;
}

RightAngled RightAngled::operator++(int) {
    RightAngled temp(*this);
    ++(*this);
    return temp;
}

RightAngled& RightAngled::operator--() {
    --a; --b; --c;
    calculateArea();
    return *this;
}

RightAngled RightAngled::operator--(int) {
    RightAngled temp(*this);
    --(*this);
    return temp;
}

std::istream& operator>>(std::istream& in, RightAngled& vec) {
    in >> vec.a >> vec.b;
    vec.c = sqrt(vec.a * vec.a + vec.b * vec.b);
    vec.calculateArea();
    return in;
}

std::ostream& operator<<(std::ostream& out, const RightAngled& vec) {
    out << static_cast<std::string>(vec);
    return out;
}
