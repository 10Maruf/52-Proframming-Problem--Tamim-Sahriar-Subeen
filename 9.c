//square number
#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,sq_root;
    int num;
    scanf("%d",&t);
    for ( i = 0; i < t; i++)
    {
        scanf("%d",&num);
        sq_root = sqrt(num);
            if (sq_root * sq_root==num)
            {
                printf("Yes\n");
            }
                else
                {
                     printf("No\n");
                }
    }
    return 0;
}
