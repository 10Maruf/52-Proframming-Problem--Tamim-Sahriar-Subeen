//Character Count
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d",&t);
    getchar();
    while (t--)
    {
        char string[1001];
        int i,j,count[26];
        gets(string);
            for ( i = 0; i < 26; i++)
            {
                count[i]=0;
            }
            

                for ( i = 0; i < strlen(string); i++)
                {
                    if (string[i] >= 'a' && string[i] <= 'z')
                    {
                        count[string[i] - 'a']++;
                    }
                    
                    
                }
                
                for ( j = 0; j < 26; j++)
                    {
                        if (count[j] != 0)
                        {
                            printf("%c = %d\n",'a'+ j,count[j]); 
                        }                                          
                        
                    }
            if (t!=0)
			{
				 printf("\n");
			}
			
           
    }
    
    return 0;
}