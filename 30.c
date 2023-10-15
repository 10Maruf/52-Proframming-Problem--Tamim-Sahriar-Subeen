//Perfect number
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        unsigned long long  int n,pn;
        scanf("%llu",&n);
       unsigned long long  int ara[] ={6, 28, 496, 8128, 33550336, 8589869056,137438691328,2305843008139952128};
        for (int i = 0; i < 8 ; i++)
        {
         if (ara[i] == n)
         {
            printf("YES, %llu is a perfect number!\n",n);
                break;
         }
        
         else if (ara[i] > n)
         {
            printf("NO, %llu is not a perfect number!\n",n);
            break;
         }
         
        }
           
        
    }
    
    return 0;
}

//run time exceeded
/*#include <stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
       unsigned long long int n,sum=0;
        scanf("%llu",&n);
        for (int i = 1; i <=sqrt(n) ; i++)
        {
            if (n%i == 0)
            {
               sum = sum + i + n/i ;
            }
            

        }
        if (sum-n == n)
        {
            printf("YES, %llu is a perfect number!\n",n);
        }
        else
        {
            printf("NO, %llu is not a perfect number!\n",n);
        }
        
    }
    
    return 0;
//another method
#include <stdio.h>
#include <math.h>

int isPerfect(unsigned long long int n) {
    unsigned long long int sum = 1;
    int sqrt_n = sqrt(n);
    for (int i = 2; i <= sqrt_n; i++) {
        if (n % i == 0) {
            sum += i + n / i;
        }
    }
    return sum == n;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        unsigned long long int n;
        scanf("%llu", &n);
        if (isPerfect(n)) {
            printf("YES, %llu is a perfect number!\n", n);
        } else {
            printf("NO, %llu is not a perfect number!\n", n);
        }
    }
    return 0;
}

}
//method 2
#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        unsigned long long int n,pn;
        scanf("%llu",&n);
        for (int i = 1; i <sqrt(n); i++)
        {
             pn = (pow(2,i-1)) * (pow(2,i) - 1);  //perfect number = 2^(n-1) x (2^n - 1)
            if (pn == n)
            {
                printf("YES, %llu is a perfect number!\n",n);
                break;
            }
        else if (pn>n)
        {
            printf("NO, %llu is not a perfect number!\n",n);
           break;
        }

        
        }

        
    }
    
    return 0;
}*/
