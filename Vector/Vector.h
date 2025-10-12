#pragma once

#if defined(_WIN32) || defined(_WIN64)
    #ifdef VECTOR_EXPORTS
        #define VECTOR_API __declspec(dllexport)
    #else
        #define VECTOR_API __declspec(dllimport)
    #endif
#else
    #define VECTOR_API __attribute__((visibility("default")))
#endif

#include "Number.h"

class VECTOR_API Vector {
public:
    Number x, y;

    Vector(const Number& x_val, const Number& y_val);

    Number getPolarRadius() const;
    Number getPolarAngle() const;

    Vector operator+(const Vector& other) const;
};

extern "C" VECTOR_API const Vector ZERO_VECTOR;
extern "C" VECTOR_API const Vector UNIT_VECTOR;
