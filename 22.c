//prime number
#include<stdio.h>
#include<math.h>
#define size 100001
char ara[size];

    void sieve() // sieve method function
    {
        int i,j,root;
        for ( i = 2; i < size; i++)
        {
            ara[i]= 1;
        }
        root =sqrt(size);
        for ( i = 2; i  <= root; i++)
        {
            if (ara[i]==1)
            {
               for (j=2; i*j <= size; j++)
               {
                ara[i*j]=0;
               }
               
            }
            
        }
        
    }

int main(int argc, char const *argv[])
{
    int t,a,b,count;
    sieve();
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d",&a,&b);
        count=0;
        for (int i = a; i <= b; i++)
        {
            if (ara[i])
            {
                count++;
            }
            
        }
        printf("%d\n",count);
    }
    
    return 0;
}


















/*#include <stdio.h>
#include <math.h>
#define size 40
int ara[size];
void print_ara()
{
int i;
for(i = 2; i < size; i++) {
printf("%4d", ara[i]);
}
printf("\n");
for(i = 2; i < size; i++) {
printf("");
}
printf("\n");
for(i = 2; i < size; i++) {
printf("%4d", i);
}
printf("\n\n\n");
}
void sieve()
{
int i, j, root;
for(i = 2; i < size; i++) {
ara[i] = 1;
}
root = sqrt(size);
print_ara();
for(i = 2; i <= root; i++) {
if(ara[i] == 1) {
for(j = 2; i * j <= size; j++) {
ara[i * j] = 0;
}
print_ara();
}
}
}
int is_prime(int n)
{
int i;
if(n < 2) {
return 0;
}
return ara[n];
}
int main()
{
int n, m;
sieve();
while(1) {
printf("Please enter a number (enter 0 to exit): ");
scanf("%d", &n);
if(n == 0) {
break;
}
if(n >= size) {
printf("The number should be less than %d\n", size);
continue;
}
if(1 == is_prime(n)) {
printf("%d is a prime number.\n", n);
}
else {
printf("%d is not a prime number.\n", n);
}
}
return 0;
}*/