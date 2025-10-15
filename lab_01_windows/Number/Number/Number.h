#pragma once

class Number {
public:
    double value;

    Number(double val = 0.0);

    Number operator+(const Number& other) const;
    Number operator-(const Number& other) const;
    Number operator*(const Number& other) const;
    Number operator/(const Number& other) const;
};

extern const Number ZERO;
extern const Number ONE;

Number createNumber(double value);