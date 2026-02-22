#include <stdio.h>
#include <string.h>

int anagramCheck()
{
    char word1[50];
    char word2[50];
    int temp;
    int i, j;
    printf("input two words: \n");
    scanf("%s", &word1);
    scanf("%s", &word2);

    int lengthWord1 = strlen(word1);
    int lengthWord2 = strlen(word2);
    if (lengthWord1 != lengthWord2)
    {
        printf("These two words are not an anagram");
        return 0;
    }

    // sort word1
    for (i = 0; i < lengthWord1 - 1; i++)
        for (j = 0; j < lengthWord1 - 1; j++)
            if (word1[j] > word1[j + 1])
            {
                temp = word1[j];
                word1[j] = word1[j + 1];
                word1[j + 1] = temp;
            }

    printf("%s\n", word1);

    // sort word2
    for (i = 0; i < lengthWord2 - 1; i++)
        for (j = 0; j < lengthWord2 - 1; j++)
            if (word2[j] > word2[j + 1])
            {
                temp = word2[j];
                word2[j] = word2[j + 1];
                word2[j + 1] = temp;
            }

    printf("%s", word2);

    for (i = 0; i < lengthWord1; i++)
        if (word1[i] != word2[i])
        {
            printf("These two words are not an anagram");
            return 0;
        }

    /*while (i < lengthWord1 + 1)
        if (word1[i] != word2[i])
        {
            printf("These two words are not an anagram");
            return 0;
        }
        else
            i++;*/
    // printf("These two words are an anagram");
    return 1;
}

int main()
{
    // char word1[50];
    // char word2[50];
    //  printf("input two words: \n");
    //  scanf("%s", &word1);
    //  scanf("%s", &word2);
    int value = anagramCheck();
    printf("\nreturn value=%d", value);
    return 0;
}