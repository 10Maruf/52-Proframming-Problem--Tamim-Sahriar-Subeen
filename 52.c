// Khoj the search 2 ******************Final problem**********************
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char string1[150], string2[150];
        int count = 0;
        scanf("%s %s", string1, string2); // input two string
        int str1_len = strlen(string1);
        int str2_len = strlen(string2);
        for (int i = 0; i < (str1_len - str2_len + 1); i++)
        {
            int flag = 1;

            for (int j = 0; j < str2_len; j++)
            {

                if (string2[j] != string1[i + j])
                {
                    flag = 0;
                    break;
                }
            }

            if (flag == 1)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
