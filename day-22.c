Q85. Write a Program to Check Palindrome String

#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}

Q86. Write a Program to Count Words in a Sentence

#include <stdio.h>

int main()
{
    char str[200];
    int i = 0, words = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] == '\n')
        words = 0;

    while (str[i] != '\0')
    {
        if (str[i] == ' ' && str[i + 1] != ' ' &&
            str[i + 1] != '\0' && str[i + 1] != '\n')
        {
            words++;
        }
        i++;
    }

    printf("Total Words = %d", words);

    return 0;
}

Q87. Write a Program to Find Character Frequency

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to find frequency: ");
    scanf("%c", &ch);

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}

Q88. Write a Program to Remove Spaces from a String

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n')
        {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';

    printf("String after removing spaces: %s", str);

    return 0;
}
