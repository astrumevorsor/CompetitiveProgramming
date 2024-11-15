#include <iostream>
using namespace std;


int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    return fibonacci(n - 1) + fibonacci(n - 2);
}