// Divisible 2
#include <stdio.h>
unsigned long long int gcd(unsigned long long int a, unsigned long long int b) //gcd function
{
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

unsigned long long int lcm(unsigned long long int a, unsigned long long int b) //lcm function
{
    return (a * b) / gcd(a, b);
}

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        unsigned long long int a, b, c;
        scanf("%llu %llu %llu", &a, &b, &c);
        for (unsigned long long int i = lcm(a,b); i <= c; i += (lcm(a,b)))
        {
           
            printf("%llu\n", i);
        }
        printf("\n");
    }

    return 0;
}
