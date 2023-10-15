//reverse word
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char s[1001];
    int i,t,len;
    scanf("%d",&t);
        while (t--)
        {
            scanf(" %[^\n]",s);
            len=strlen(s);
            for ( i = len-1; i >=0; i--)
            {
                printf("%c",s[i]);
            }
                printf("\n");
        }
    
    return 0;
}
