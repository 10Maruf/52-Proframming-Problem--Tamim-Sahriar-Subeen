//factorial 100 trailing zeros

#include<stdio.h>

int main() {
    int num, i,t,j, trailing_zeroes = 0;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
    scanf("%d", &num);
    trailing_zeroes=0;
    for(i = 5; i <= num; i += 5)
    {
        int temp = i;
       
        while(temp % 5 == 0) 
        {
            trailing_zeroes++;
            temp /= 5;
        }
    }
    printf("%d\n",trailing_zeroes);
    }

    return 0;
}
