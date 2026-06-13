Q13. Generate Fibonacci Series in C
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(int i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}

Q14. Find nth Fibonacci Term in C
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n == 1)
        printf("Nth Fibonacci Term = %d", a);
    else if(n == 2)
        printf("Nth Fibonacci Term = %d", b);
    else {
        for(int i = 3; i <= n; i++) {
            next = a + b;
            a = b;
            b = next;
        }
        printf("Nth Fibonacci Term = %d", b);
    }

    return 0;
}

Q15. Check Armstrong Number in C
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(original != 0) {
        digits++;
        original /= 10;
    }

    original = num;

    while(original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    if(result == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}

Q16. Print Armstrong Numbers in a Range in C
#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong Numbers: ");

    for(int num = start; num <= end; num++) {
        int original = num, digits = 0, sum = 0, remainder;

        while(original != 0) {
            digits++;
            original /= 10;
        }

        original = num;

        while(original != 0) {
            remainder = original % 10;
            sum += pow(remainder, digits);
            original /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}