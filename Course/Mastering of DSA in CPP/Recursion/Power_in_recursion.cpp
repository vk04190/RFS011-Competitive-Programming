#include <stdio.h>
int power(int m, int n)
{
    if (n == 0)
        return 1;
    return power(m, n - 1) * m;
}

int power_new(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power_new(m * m, n / 2);
    return m * power_new(m * m, (n - 1) / 2);
}
int main()
{

    int r = power_new(2, 8);
    printf("%d ", r);
    return 0;
}