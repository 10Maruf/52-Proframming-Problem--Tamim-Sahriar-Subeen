//Alternate Elements
#include<stdio.h>
#include<string.h>
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
        for (int i = 0; i < n; i+=2)
        {
            printf("%d ",ara[i]);
        }
        printf("\n");
    }
    
    return 0;
}
