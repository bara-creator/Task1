#include "calculator.h"

int Calculator::Add(double a, double b)
{
<<<<<<< HEAD
    return a + b;  // використовуємо поточну версію для Add
=======
	return a + b + 0.5;
>>>>>>> 4ad40a3b4572deee4efc716e7bd6e6e4fda46dcf
}

int Calculator::Sub(double a, double b)
{
<<<<<<< HEAD
    return Add(a, -b);  // залишаємо Sub як є
=======
	return Add (a, -b);
>>>>>>> 4ad40a3b4572deee4efc716e7bd6e6e4fda46dcf
}

int Calculator::Mul(double a, double b)
{
    return a * b;  // додаємо метод Mul для множення
}

