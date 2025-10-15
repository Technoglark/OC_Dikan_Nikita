#include <iostream>
#include "../Number/Number.h"
#include "../Vector/Vector.h"

int main()
{
    std::cout << "Number Library Demo" << std::endl;
    Number num1 = createNumber(10.5);
    Number num2(5.2);

    Number sum = num1 + num2;
    Number diff = num1 - num2;
    Number prod = num1 * num2;
    Number quot = num1 / num2;

    std::cout << "num1: " << num1.value << std::endl;
    std::cout << "num2: " << num2.value << std::endl;
    std::cout << "Sum: " << sum.value << std::endl;
    std::cout << "Difference: " << diff.value << std::endl;
    std::cout << "Product: " << prod.value << std::endl;
    std::cout << "Quotient: " << quot.value << std::endl;
    std::cout << "ZERO: " << ZERO.value << ", ONE: " << ONE.value << std::endl;
    std::cout << std::endl;


    std::cout << "Vector Library Demo" << std::endl;
    Vector v1(createNumber(3.0), createNumber(4.0));
    Vector v2(ONE, ONE);

    std::cout << "Vector v1: (" << v1.x.value << ", " << v1.y.value << ")" << std::endl;
    std::cout << "Polar radius of v1: " << v1.getPolarRadius().value << std::endl;
    std::cout << "Polar angle of v1 (radians): " << v1.getPolarAngle().value << std::endl;

    Vector v_sum = v1 + v2;
    std::cout << "v1 + v2: (" << v_sum.x.value << ", " << v_sum.y.value << ")" << std::endl;

    std::cout << "ZERO_VECTOR: (" << ZERO_VECTOR.x.value << ", " << ZERO_VECTOR.y.value << ")" << std::endl;
    std::cout << "UNIT_VECTOR: (" << UNIT_VECTOR.x.value << ", " << UNIT_VECTOR.y.value << ")" << std::endl;
}

