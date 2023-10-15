// Tomi Mia's Probability
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
static int same = 1;
int fact(int n) // function to calculate factorial of a number
{
    int a;

    for (a = 1; n > 1; n--)
        a *= n;

    return a;
}
int similarWords(char *word, char *sentence)
{
    char *token2;
    token2 = strtok(token2, " ");
    while (token2 != NULL)
    {
        if (strcmp(token2, word) == 0)
        {

            same++;
        }

        token2 = strtok(NULL, " ");
    }
}
int countWords(char *sentence)
{
    char *token;
    token = strtok(sentence, " ");
    similarWords(token, sentence);
    int count = 0;
    while (token != NULL)
    {
        count++;
        token = strtok(NULL, " ");
        similarWords(token, sentence);
    }
    return count;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char sentence[1000];
        scanf(" %[^\n]", sentence);

        int count = countWords(sentence);
        int factorial = fact(count);
        int final = factorial ;
        printf("count=%d\n", same);
    }

    return 0;
}
