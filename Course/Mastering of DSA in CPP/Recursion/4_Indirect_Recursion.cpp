#include <iostream>

// only protoping of function
void funcB(int n);

void funcA(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        funcB(n - 1);
    }
}

void funcB(int n)
{
    if (n > 1)
    {
        printf("%d ", n);
        funcA(n / 2);
    }
}

int main()
{
    // printf("Hi");
    funcA(20);
}