// Palindrome

#include <stdio.h>
#include <string.h>

void reverse(char *str, char *reverse_str) // reverse word function
{
    int i, j;
    int len = strlen(str);
    for (i = 0, j = len - 1; i < len; i++, j--)
    {
        reverse_str[j] = str[i];
    }
    reverse_str[len] = '\0'; // word terminate. ************
}

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char word[1001], reverse_word[1001];
        scanf(" %[^\n]", word);

        reverse(word, reverse_word);
        if (strcmp(word, reverse_word) == 0)
        {
            printf("Yes! It is palindrome!\n");
        }
        else
        {
            printf("Sorry! It is not palindrome!\n");
        }
    }

    return 0;
}

// another method
/*#include <stdio.h>
#include <string.h>

// define some constant
#define TRUE 1
#define FALSE 0

int main(void){
    // create necessary variable
    char word[1005]; // store word
    int  t, // for store test case
         last_index, // store word last index
         is_palindrome, // for check word is pallendrom or not
         i,j; //for iterate the word

    // get test case (t)
    scanf("%d",&t);

    // run the program
    while(t--){
        // get word
        scanf(" %[^\n]",word);

        // get last intdex
        last_index = strlen(word) - 1;

        // logic --> is pallandrom or not
        is_palindrome = TRUE;
        for(i = 0,j = last_index; i <= last_index;i++,j--){
            if(word[i] != word[j]){
                is_palindrome = FALSE;
                break;
            }
        }

        // print is pallendrom or not
        if(is_palindrome){
            printf("Yes! It is palindrome!\n");
        }else{
            printf("Sorry! It is not palindrome!\n");
        }
    }
    return 0;
}*/