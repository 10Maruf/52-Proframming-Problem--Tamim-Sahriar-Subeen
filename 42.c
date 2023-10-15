// Sum of series 3
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int i, k;
        scanf("%d", &k);
        for (i = k; i >= 0; i--)
        {
            if (i == 0)
            {
                printf("1\n");
            }
            else if (i == 1)
            {
                printf("2 + ");
            }
            else
            {
                printf("2^%d + ", i);
            }
        }
    }

    return 0;
}
