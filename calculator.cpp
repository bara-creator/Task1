#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return a + b + 0.5; // Додаємо 0.5 для врахування помилки округлення
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

