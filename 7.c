//count numbers
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char line[100000];
    char *p, *e;
    long input;
    int count=0, t, i;
    scanf("%d", &t);
    getchar();
    for (i = 0; i < t; i++)
    {
        scanf("%[^\n]", line);
        getchar();
        count = 0; // reset count for each input string
        for (p = line; ; p = e)
        {
            input = strtol(p, &e, 10);//input only digit
            if (p == e)
            {
                break;
            }
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    char line[]="1 -2 10000 -50 20 7 445";
    char *p, *e;
    long input;
    int count=0;
        p=line;
            for (p= line; ; p=e)
            {
                input = strtol(p,&e,10);
                    if (p==e)
                    {
                        break;
                    }
                        count++;
            }
                printf("%d\n",count);
            
    return 0;
}*/
