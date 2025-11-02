#include "pch.h"
#include "Number.h"
#include <stdexcept>

Number::Number(double val) : value(val) {}

Number Number::operator+(const Number& other) const {
    return Number(this->value + other.value);
}

Number Number::operator-(const Number& other) const {
    return Number(this->value - other.value);
}

Number Number::operator*(const Number& other) const {
    return Number(this->value * other.value);
}

Number Number::operator/(const Number& other) const {
    if (other.value == 0) {
        throw std::runtime_error("Division by zero!");
    }
    return Number(this->value / other.value);
}

const Number ZERO(0.0);
const Number ONE(1.0);

Number createNumber(double value) {
    return Number(value);
}