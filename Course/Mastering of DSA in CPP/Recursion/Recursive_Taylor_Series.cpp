// sum(N) term

// #include <stdio.h>

// int sum_(int n)
// {
//     if (n > 0)
//         return sum_(n - 1) + n;
// }

// int main()
// {
//     int s = sum_(4);
//     printf("%d ", s);
//     return 0;
// }

#include <stdio.h>
double e(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return e(x, n - 1);
}
int main()
{
    printf("%lf \n", e(1, 20));
}