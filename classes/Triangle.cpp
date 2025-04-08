#include "Triangle.h"

Triangle::Triangle(double a, double b, double c) : a(a), b(b), c(c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        std::cerr << "Error: Invalid triangle sides!\n";
        exit(1);
    }
}

Triangle::Triangle(const Triangle& other) : a(other.a), b(other.b), c(other.c) {}

Triangle& Triangle::operator=(const Triangle& other) {
    if (this != &other) {
        a = other.a;
        b = other.b;
        c = other.c;
    }
    return *this;
}

Triangle& Triangle::operator++() {
    ++a; ++b; ++c;
    return *this;
}

Triangle Triangle::operator++(int) {
    Triangle temp(*this);
    ++(*this);
    return temp;
}

Triangle& Triangle::operator--() {
    --a; --b; --c;
    return *this;
}

Triangle Triangle::operator--(int) {
    Triangle temp(*this);
    --(*this);
    return temp;
}

double Triangle::getA() const { return a; }
double Triangle::getB() const { return b; }
double Triangle::getC() const { return c; }

void Triangle::setA(double a) { this->a = a; }
void Triangle::setB(double b) { this->b = b; }
void Triangle::setC(double c) { this->c = c; }
void Triangle::setSides(double a, double b, double c) { this->a = a; this->b = b; this->c = c; }

double Triangle::getArea() const {
    double s = getArea() / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

void Triangle::getAngles(double& alpha, double& beta, double& gamma) const {
    alpha = acos((b * b + c * c - a * a) / (2 * b * c)) * 180 / acos(-1);
    beta = acos((a * a + c * c - b * b) / (2 * a * c)) * 180 / acos(-1);
    gamma = 180 - alpha - beta;
}

std::string Triangle::to_string() const {
    std::stringstream ss;
    ss << "Triangle: sides(" << a << ", " << b << ", " << c << ")";
    return ss.str();
}

Triangle::operator std::string() const { return to_string(); }

std::istream& operator>>(std::istream& in, Triangle& triangle) {
    in >> triangle.a >> triangle.b >> triangle.c;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Triangle& triangle) {
    out << static_cast<std::string>(triangle);
    return out;
}
