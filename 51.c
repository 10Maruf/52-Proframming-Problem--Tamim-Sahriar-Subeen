//Khoj the search 1
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char string1[128], string2[128];
        scanf("%s %s", string1, string2);//input two string
        int str1_len = strlen(string1);
        int str2_len = strlen(string2);
        for (int i = 0; i < (str1_len ); i++)
        {
            if (string2[0] == string1[i])
            {
                for (int j = 1; j < str2_len; j++)
                {
                    if (string2[j] != string1[i + j])
                    {
                        break;
                    }
                    if (j == str2_len - 1)
                    {
                        printf("%d\n", i);
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
