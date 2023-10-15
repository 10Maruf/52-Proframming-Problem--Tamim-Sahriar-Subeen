//box-1

#include<stdio.h>
    int main()
{
    int t,n,i,j,k;
    
    scanf("%d",&t);
        for ( k= 1; k <=t ; k++)
        {
            scanf("%d",&n);
            for ( i = 1; i <=n; i++)
            {
                for (j = 1; j<=n; j++)
                {
                    printf("*");
                }
               printf("\n");
            }
            if (k<t)
            {
                 printf("\n");
            }
            
           
        }
        
        
            
    return 0;
}
