//perfect number 2
#include<stdio.h>
int main()
{
    
    int t,n,i;
    
    int perfect_number_list[5] = {6,28,496,8128,33550336};

    
    scanf("%d",&t);

   
    while(t--){
        
        scanf("%d",&n);

        
        for(i = 0; i < 5;i++){
            if(perfect_number_list[i] <= n){
                printf("%d\n",perfect_number_list[i]);
            }
        }
        printf("\n");
    }
    return 0;
}



//time limit exceeded
/*#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
   long long int t,i,n,num,sqrt_num,sum;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for ( num = 2; num <= n; num++)
        {
            sum=1;
            sqrt_num = sqrt(num);
            for ( i = 2; i <= sqrt_num; i++)
            {
               if (num % i == 0)
               {
                sum= sum + i + num/i;
               }
               
            }
            if (sum == num)
            {
                printf("%lld\n",num);
            }
            
        }
        
    }
    return 0;
}*/
