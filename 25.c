//LCM
#include<stdio.h>
long long gcd(long long a, long long b) //GCD function
{
    long long temp;
    while (b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
    int main(long long argc, char const *argv[])
    {
        int t;
        long long a,b;
        scanf("%d",&t);
        while (t--)
        {
            scanf("%lld %lld",&a,&b);
            printf("LCM = %lld\n",(a*b)/gcd(a,b));
        }
        
        return 0;
    }
