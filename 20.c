//Word count 2
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char str[10002];
        char *word;
        scanf(" %[^\n]",str);
            word = strtok(str, ",!;?.' "); //using string tokenization function
            int count=0;

        while (word!= NULL)
        {
            if (strlen(word) > 0)
            {
                count++;
            }
            word = strtok(NULL, ",!;?.' ");
        }
        
            printf("Count = %d\n",count); 
    }
    return 0;
}
