//Alien Gupi
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        double x;
        int count=0;
        scanf("%lf",&x);
        while (x>1.0)
        {
            x=x/2;
            count++;
        }
        printf("%d days\n",count);
    }
    
    return 0;
}
