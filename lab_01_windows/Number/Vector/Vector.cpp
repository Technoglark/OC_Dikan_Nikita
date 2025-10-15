#include "pch.h"
#include "Vector.h"
#include <cmath>

Vector::Vector(const Number& x_val, const Number& y_val) : x(x_val), y(y_val) {}

Number Vector::getPolarRadius() const {
    return Number(sqrt(x.value * x.value + y.value * y.value));
}

Number Vector::getPolarAngle() const {
    return Number(atan2(y.value, x.value));
}

Vector Vector::operator+(const Vector& other) const {
    return Vector(this->x + other.x, this->y + other.y);
}

extern "C" VECTOR_API const Vector ZERO_VECTOR(ZERO, ZERO);
extern "C" VECTOR_API const Vector UNIT_VECTOR(ONE, ONE);