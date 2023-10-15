// Sum of series 2
#include <stdio.h>
long long int factorial(long long int n) // factorial funtion using recursion
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
       int n;
        scanf("%d", &n);
        double sum = 0.0;
        for (int i = 1; i <= n; i++)
        {
            sum += ((double)i / factorial(i)); // here typecasting of i
        }
        printf("%0.4lf\n",sum);
    }

    return 0;
}
