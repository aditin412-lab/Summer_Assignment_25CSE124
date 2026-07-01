Q89. Write a program to Find First Non-Repeating Character
Program
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count frequency
    for(i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find first non-repeating character
    for(i = 0; str[i] != '\0'; i++) {
        if(freq[(int)str[i]] == 1) {
            printf("First non-repeating character = %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}

Q90. Write a program to Find First Repeating Character
Program
#include <stdio.h>

int main() {
    char str[100];
    int visited[256] = {0};
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(visited[(int)str[i]] == 1) {
            printf("First repeating character = %c\n", str[i]);
            return 0;
        }
        visited[(int)str[i]]++;
    }

    printf("No repeating character found.\n");

    return 0;
}

Q91. Write a program to Check Anagram Strings
Program
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Strings are not Anagrams.\n");
        return 0;
    }

    for(i = 0; str1[i] != '\0'; i++) {
        freq[(int)str1[i]]++;
        freq[(int)str2[i]]--;
    }

    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("Strings are not Anagrams.\n");
            return 0;
        }
    }

    printf("Strings are Anagrams.\n");

    return 0;
}

Q92. Write a program to Find Maximum Occurring Character
Program
#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    // Count frequency
    for(i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find maximum occurring character
    for(i = 0; str[i] != '\0'; i++) {
        if(freq[(int)str[i]] > max) {
            max = freq[(int)str[i]];
            ch = str[i];
        }
    }

    printf("Maximum occurring character = %c\n", ch);
    printf("Frequency = %d\n", max);

    return 0;
}
