// Sum of series
#include <stdio.h>
// int sum_of_series(int x, int k) //recursion of function************

                                // The function will then be executed as follows:
                                // Call sum_of_series(5, 2)
                                // Call sum_of_series(5, 1)
                                // Return 1 + 5 = 6
                                // Return (6 * 5) + 1 = 31
                                // So the final result is 31, which is the sum of the series 1 + 5^1 + 5^2.
// {
//     int power = 1, sum = 1;
//     if (k == 0)
//     {
//         return sum;
//     }
//     else if (k == 1)
//     {
//         return sum + x;
//     }
//     else
//     {
//         return (sum_of_series(x, k-1) * x) + sum;
//     }
// }

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, k, power = 1, sum = 1;
        scanf("%d %d", &x, &k);
        for (int i = 1; i <= k; i++)
        {
            power = power * x;
            sum += power;
        }
        printf("Result = %d\n",sum);
        // printf("%d",sum_of_series(x,k));
    }

    return 0;
}
