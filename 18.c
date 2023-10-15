//vowels-consonants
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i;
        char string[10002];
        scanf(" %[^\n]",string);
        for ( i = 0; i < strlen(string); i++)
        {
            if (string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
            {
                printf("%c",string[i]);
                
            }
        }
            printf("\n");
        for (int i = 0; i < strlen(string); i++)
        {
            if (string[i]!='a'&& string[i]!='e' && string[i]!='i' && string[i]!='o' && string[i]!='u'&& string[i]!=' ')
            {
                printf("%c",string[i]);
            }
            
        }
        printf("\n");
    }
    return 0;
}
