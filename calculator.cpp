#include "calculator.h"

int Calculator::Add(double a, double b)
{
    return a + b;  // використовуємо поточну версію для Add
}

int Calculator::Sub(double a, double b)
{
    return Add(a, -b);  // залишаємо Sub як є
}

int Calculator::Mul(double a, double b)
{
    return a * b;  // додаємо метод Mul для множення
}

