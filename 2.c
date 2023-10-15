//even-odd problem-2
#include<stdio.h>
#include<string.h>

    int main()

{
    int T,i;
    char n[101];
    int lenth,j;
    scanf("%d",&T);
        for ( i = 1; i <= T; i++)
        {
            scanf("%s",&n);
                 j=strlen(n);

                if (n[j-1]%2==0)
                     {
                            printf("even\n");
                     }
                else 
                {
                            printf("odd\n");
                }
        }
    return 0;    
}