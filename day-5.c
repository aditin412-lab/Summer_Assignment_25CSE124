Q17. Check Perfect Number in C

A perfect number is a number whose sum of proper divisors equals the number itself.
Example: 6 = 1 + 2 + 3

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 1; i < num; i++) {
        if(num % i == 0)
            sum += i;
    }

    if(sum == num)
        printf("%d is a Perfect Number", num);
    else
        printf("%d is not a Perfect Number", num);

    return 0;
}

Q18. Check Strong Number in C

A strong number is a number whose sum of factorials of digits equals the number itself.
Example: 145 = 1! + 4! + 5!

#include <stdio.h>

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num > 0) {
        digit = num % 10;

        int fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if(sum == original)
        printf("%d is a Strong Number", original);
    else
        printf("%d is not a Strong Number", original);

    return 0;
}

Q19. Print Factors of a Number in C
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    for(int i = 1; i <= num; i++) {
        if(num % i == 0)
            printf("%d ", i);
    }

    return 0;
}


Q20. Find Largest Prime Factor in C
#include <stdio.h>

int main() {
    long long num, largestFactor = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    while(num % 2 == 0) {
        largestFactor = 2;
        num /= 2;
    }

    for(long long i = 3; i * i <= num; i += 2) {
        while(num % i == 0) {
            largestFactor = i;
            num /= i;
        }
    }

    if(num > 2)
        largestFactor = num;

    printf("Largest Prime Factor = %lld", largestFactor);

    return 0;
}