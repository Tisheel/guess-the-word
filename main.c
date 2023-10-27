#include "stdio.h"
#include "stdlib.h"

int is_in_str(char ch, char str1[], char str2[])
{
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == ch)
        {
            str2[i] = ch;
        }
    }
}

int cmp(char str1[], char str2[])
{
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
    }

    return 1;
}

int length(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i = i + 1;
    }
    return i;
}

void main()
{
    char word[100];
    char user_letter;
    char user_word[100];
    int i, j, n;

    printf("Enter the word for your friend to guess: ");
    scanf("%s", &word);

    n = length(word);

    for (i = 0; i < n; i++)
    {
        user_word[i] = '_';
    }

    user_word[i] = '\0';

    system("cls");

    printf("*****************************Game Started*****************************\n");
    printf("Guess the %d letter word\n", n);

    while (1)
    {
        printf("The word %s\n", user_word);
        scanf(" %c", &user_letter);
        is_in_str(user_letter, word, user_word);

        j = cmp(user_word, word);

        if (j)
        {
            printf("You Won!!! Word is %s", word);
            exit(0);
        }
    }
}