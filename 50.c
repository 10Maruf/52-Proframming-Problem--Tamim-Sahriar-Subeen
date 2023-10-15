// Left Right
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char ara[50];
        scanf(" %[^\n]", ara);
        for (int i = 0; i < strlen(ara) ; i++)
        {
                if (ara[i]=='L')
            {
                ara[i]=ara[i-1];
            }
            else if (ara[i]=='R')
            {
                ara[i]=ara[i+1];
            }
        
        }

        printf("%s\n",ara);
    }

    return 0;
}
