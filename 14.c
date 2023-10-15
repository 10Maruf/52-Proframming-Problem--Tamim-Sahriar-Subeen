//Character Frequency
#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    
    int i,j,t;
    scanf("%d",&t);
    getchar();//note this
    for (size_t i = 0; i < t; i++)
    {
     char first_line[10001];
    char second_line[2];
        int count=0;
       gets(first_line);
       gets(second_line);// for input
       /*another for input
       scanf("%[^\n]",first_line);//here scanf(" %[^\n]",first_line);
       getchar();
       scanf("%s",second_line);// for input
        getchar();*/
        
        for ( j = 0; j < strlen(first_line); j++)
        {
            if (second_line[0]==first_line[j])
            {
                count++;
            
             
            }
            
           
        
        }
        if (count>0)
        {
           printf("Occurrence of '%c' in '%s' = %d\n",second_line[0],first_line,count);
        }
        else
        {
            printf("'%c' is not present\n",second_line[0]);
        }
        
        
    }
    
       return 0;

    }

