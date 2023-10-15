//Word count-1
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char string[10002];
        int count=0;
        scanf(" %[^\n]",string);

        for (int i = 0; string[i]!='\0'; i++)
        {
            if (string[i]==' ')
            {
                count++;
            }
            
        }
            printf("Count = %d\n",count+1); 
    }
    
    return 0;
}
