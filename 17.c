//Vowel Count
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[10002];
        int count=0;
        scanf(" %[^\n]",str);
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            {
                count++;
            }
            
            
        }
        
            printf("Number of vowels = %d\n",count);
    }
    return 0;
}
