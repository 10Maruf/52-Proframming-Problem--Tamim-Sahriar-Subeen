//Word disaster
#include<stdio.h>
#include<string.h>
void print_reverse(char str[]) //reverse print funtion
{
    int i;
    for ( i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    
}
    int main(int argc, char const *argv[])
{
    int i,t;
    char string[1002],word[1002];
        scanf("%d",&t);
        for ( i = 0; i < t; i++)
        {
            scanf(" %[^\n]",string);//use whitespace before %
            int j,k;
            for ( j = 0,k=0; j < strlen(string); j++)
            {
                if (string[j]!= ' ')
                {
                    word[k]=string[j];
                    k++;
                }

                else if (k > 0)
                {
                    word[k]= '\0'; //string finished here
                    print_reverse(word);
                    printf(" ");
                    k=0;
                }    
            }
            if (k > 0) // for last word print
            {
                word[k] = '\0';
                print_reverse(word);
                printf("\n");
            }
            
        }
        
    return 0;
}
