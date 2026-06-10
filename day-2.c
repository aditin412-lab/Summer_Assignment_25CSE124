
Program to Find Sum of Digits of a Number
#include <stdio.h>

int main() {
    int num, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}


Program to Reverse a Number
#include <stdio.h>

int main() {
    int num, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    printf("Reversed number = %d", reverse);

    return 0;
}

Q7. Program to Find Product of Digits
#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }

    printf("Product of digits = %lld", product);

    return 0;
}
Q8. Program to Check Whether a Number is Palindrome
#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if (original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}

Q7. Program to Find Product of Digits
#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }

    printf("Product of digits = %lld", product);

    return 0;
}
Q8. Program to Check Whether a Number is Palindrome
#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if (original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}

Program to Find Product of Digits
#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }

    printf("Product of digits = %lld", product);

    return 0;
}



Program to Check Whether a Number is Palindrome
#include <stdio.h>

int main() {
    int num, original, reverse = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if (original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}