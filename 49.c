// Is prime
#include <stdio.h>
#include <math.h>
#define size 100000001
char ara[size];

void sieve() // sieve method function
{
    int i, j, root;
    for (i = 2; i < size; i++)
    {
        ara[i] = 1;
    }
    root = sqrt(size);
    for (i = 2; i <= root; i++)
    {
        if (ara[i] == 1)
        {
            for (j = 2; i * j <= size; j++)
            {
                ara[i * j] = 0;
            }
        }
    }
}
    int main(int argc, char const *argv[])
    {
        int t;
        sieve();
        scanf("%d",&t);
        while (t--)
        {
            long long int n;
            scanf("%lld",&n);
            if (ara[n]== 1)
            {
                printf("%lld is a prime\n",n);
            }
            else printf("%lld is not a prime\n",n);
            
        }
        
        return 0;
    }
    