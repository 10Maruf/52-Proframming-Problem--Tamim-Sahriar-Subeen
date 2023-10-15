//Letter to number
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char string[101];
        scanf(" %[^\n]", string);
        for (int i = 0; string[i] != '\0' ; i++)
        {
            if (string[i] >= 'A'&& string[i]<='Z')
            {
                printf("%d",string[i]-'A'+1);
            }
                
        }
        printf("\n");
    }
    
    
return 0;
}
