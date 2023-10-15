//factorial
#include<stdio.h>

int main() 
{
  int num, i,t,j;
  long long int factorial;//for 15!= huge number so used longlong int
    
    scanf("%d",&t);
    for (j = 0; j <t; j++)
    {
        factorial=1;
       scanf("%d", &num);
    for(i = 2; i <= num; i++)
     {
        factorial *= i;
    }
    printf("%lld\n",factorial);
    }
    

    return 0;
}
