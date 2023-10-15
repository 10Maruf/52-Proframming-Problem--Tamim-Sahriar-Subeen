//Character Recognition
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    
    while (t--)
    {
        char ch;
        scanf(" %c",&ch); //using space before %
        
        if (ch >= 'a' && ch <='z')
        {
            printf("Lowercase Character\n");
        }
        else if (ch >= 'A'&& ch<='Z')
        {
            printf("Uppercase Character\n");
        }
        else if (ch >= '0'&& ch<='9' )
        {
            printf("Numerical Digit\n");
        }
        else
        {
            printf("Special Characters\n");
        }
        
        
    }
    
    return 0;
}
