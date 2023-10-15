// //divisor
// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     int t,n,i,j,k,temp;
//     int divisors[100000];

//     scanf("%d",&t);

//     for ( i = 1; i <=t&&t<=10; i++)
//     {
//         scanf("%d",&n);
//         if (1<=n&&n<=100000)
//         {
//             printf("case %d: ",i);
//             k=0;
//             for ( j = 1; j <= sqrt(n); j++)
//             {
//                 if (n%j==0)
//                 {
//                     divisors[k++]=j;
//                     if(j != sqrt(n))
//                     divisors[k++]=n/j;
//                 }
//             }
//             // Sort the divisors in ascending order
//             for (j = 0; j < k-1; j++)
//             {
//                 for (int l = j+1; l < k; l++)
//                 {
//                     if (divisors[j] > divisors[l])
//                     {
//                         temp = divisors[j];
//                         divisors[j] = divisors[l];
//                         divisors[l] = temp;
//                     }
//                 }
//             }
//             // Print the divisors
//             for (j = 0; j < k; j++)
//             {
//                 printf("%d ", divisors[j]);
//             }
//         }
//         else {
//             break;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// arekb vabe
#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,i,j;

    scanf("%d",&t);

    for ( i = 1; i <=t&&t<=10; i++)
    {
        scanf("%d",&n);
        if (1<=n&&n<=100000)
        {
            printf("case %d: ",i);
            for ( j = 1; j <= sqrt(n); j++)
            {
                if (n%j==0)
                {
                    printf("%d ",j);   
                    if(j != sqrt(n))
                    printf("%d ",n/j);
                }
            }
        }
        else {
            break;
        }
        printf("\n");
    }
    return 0;
}
//divisor
// #include<stdio.h>

// int main()
// {
//     int t,n,i,j;

//     scanf("%d",&t);

//         for ( i = 1; i <=t&&t<=10; i++)
//         {
//             scanf("%d",&n);
//             if (1<=n&&n<=100000)
//             {
            
//             printf("case %d: ",i);
//             for ( j = 1; j <=n; j++)
//             {
//                 if (n%j==0)
//                 {
//                     printf("%d ",j);   
//                }
              
//             }
//             }
//             else {
                
//             break;
//             }
//             printf("\n");
//         }
        
//     return 0;
// }

// */
