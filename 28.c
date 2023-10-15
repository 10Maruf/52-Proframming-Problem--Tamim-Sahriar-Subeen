//Random Array
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
       int n;
        scanf("%d",&n);
        int ara[n];
        for (int i = 0; i < n; i++)
        {
           scanf("%d",&ara[i]);
        }
        int sorted = 1,sorted2 = 1;

        for (int i = 1; i < n; i++)
        {
            if (ara[i] < ara[i-1])
            {
                sorted= 0;
                break;
            }
            
        }
        for (int i = n-1; i>=0; i--) //problem creates when used this condition "0<=i<n" note: creates infinite loop
        {
            if (ara[i] > ara[i-1])
            {
                sorted2= 0;
                break;
            }
            
        }
            if (sorted == 0 && sorted2 == 0)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
            
    }
    
    return 0;
}
