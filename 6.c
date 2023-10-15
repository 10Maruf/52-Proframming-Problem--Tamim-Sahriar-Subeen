//summation
#include <stdio.h>
#include <string.h>

int main() {
    int i, sum=0,t;
    char num[6];
        scanf("%d",&t);
    for (i = 0; i <t; i++)
     {
        scanf("%s", num);
        sum = num[0] - '0' + num[4] - '0';
        printf("Sum = %d\n", sum);
    }
    return 0;
}


/*using array
#include <stdio.h>

int main() {
    int i, num, sum=0;
    int arr[5];
    for (i = 0; i < 5; i++) {
        printf("Enter a 5-digit number: ");
        scanf("%d", &num);
        while(num>0)
        {
            arr[i]=num%10;
            num/=10;
        }
        sum = arr[0]+arr[4];
        printf("Sum = %d\n", sum);
    }
    return 0;
}

//using basic
#include <stdio.h>

int main() {
    int i, num, sum=0;
    for (i = 0; i < 5; i++) {
        printf("Enter a 5-digit number: ");
        scanf("%d", &num);
        sum = (num % 10) + (num / 10000);
        printf("Sum = %d\n", sum);
    }
    return 0;
}

*/
