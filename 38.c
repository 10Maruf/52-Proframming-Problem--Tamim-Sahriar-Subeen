// Diamond Kingdom
#include <stdio.h>

int hill(int n, int m) // half hill function
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (!j)//it means when j=0 if condition true. It is a NOT operator
            {
             printf("%d", m);
            }
            else printf(" %d", m);
        }
        printf("\n");
    }
    return 0;
}
int reverse_hill(int n, int m) // 2nd half hill function
{
    int i, j;
    for (i = n-1 ; i > 0; i--)
    {
        for (j = 0; j <i ; j++)
        {
            if (!j)
            {
             printf("%d", m);
            }
            else printf(" %d", m);
        }
        printf("\n");
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);
         hill(n, m);
        reverse_hill(n, m);
        printf("\n");
    }

    return 0;
}
