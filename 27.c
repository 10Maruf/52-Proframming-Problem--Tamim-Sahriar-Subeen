//Armstrong number
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t,n,sum=0,rem,temp=0;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        temp=n;
        sum=0;
        while (temp!=0)
        {
            rem= temp%10;
            sum+=(rem*rem*rem);
            temp/=10;
        }
        if (sum!=n)
        {
           printf("%d is not an armstrong number!\n",n);
        }
        else
        {
            printf("%d is an armstrong number!\n",n);
        }
        
    }
    
    return 0;
}
