// Divisible 1
#include <stdio.h>

int main(void) // more optimized version
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        long long int i = a; // initialization
        if (i % c != 0)
        {
            i = i + (c - i % c);
        }

        for (; i <= b; i += c)
        {
            printf("%lld\n", i);
        }

        printf("\n");
    }

    return 0;
}
/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
      long long int a,b,c;
       scanf("%lld %lld %lld",&a,&b,&c);

        for (long long int i = c;  i <= b; i += c )
        {
            if (i>=a)
            {
             printf("%lld\n",i);
            }


        }


       printf("\n");
    }

    return 0;
}*/