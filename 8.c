//small to big for three numbers
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t,i,n1,n2,n3,temp;
    scanf("%d",&t);

        for ( i = 1; i <= t; i++)
        {
            scanf("%d %d %d",&n1,&n2,&n3);

            while(n1>n2 || n2>n3 || n1>n3) {
                if (n1>n2)
                {
                    temp=n1;
                    n1=n2;
                    n2=temp;
                }
                if (n2>n3)
                {
                    temp=n2;
                    n2=n3;
                    n3=temp;
                }
                if (n1>n3)
                {
                    temp=n1;
                    n1=n3;
                    n3=temp;
                }
            }
            printf("Case %d: %d %d %d\n",i,n1,n2,n3);
        }
    return 0;
}
/*using string
#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    int t,i;
    scanf("%d",&t);
    for ( i = 1; i <= t; i++)
    {
        int n1,n2,n3;
        scanf("%d %d %d",&n1,&n2,&n3);
        char str[20];
        sprintf(str, "%d%d%d", n1, n2, n3);
        int len = strlen(str);
        qsort(str, len, sizeof(char), (int(*)(const void*,const void*))strcmp);
        sscanf(str, "%d%d%d", &n1, &n2, &n3);
        printf("Case %d: %d %d %d\n",i,n1,n2,n3);
    }
    return 0;
}

using array
#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
int main(int argc, char const *argv[])
{
    int t,i;
    scanf("%d",&t);

    for ( i = 1; i <= t; i++)
    {
        int n1,n2,n3;
        scanf("%d %d %d",&n1,&n2,&n3);
        int arr[3] = {n1, n2, n3};
        qsort(arr, 3, sizeof(int), compare);
        printf("Case %d: %d %d %d\n",i,arr[0],arr[1],arr[2]);
    }
    return 0;
}
*/

