#include <stdio.h>

int main()
{
    int choice, n, i;
    long long factorial = 1;

    printf("Choose Program:\n");
    printf("1. Sum of first N natural numbers\n");
    printf("2. Multiplication table\n");
    printf("3. Factorial of a number\n");
    printf("4. Count digits in a number\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            // Q1: Sum of first N natural numbers
            printf("Enter N: ");
            scanf("%d", &n);

            int sum = 0;
            for(i = 1; i <= n; i++)
            {
                sum += i;
            }

            printf("Sum of first %d natural numbers = %d\n", n, sum);
            break;

        case 2:
            // Q2: Multiplication table
            printf("Enter a number: ");
            scanf("%d", &n);

            printf("Multiplication Table of %d:\n", n);
            for(i = 1; i <= 10; i++)
            {
                printf("%d x %d = %d\n", n, i, n * i);
            }
            break;

        case 3:
            // Q3: Factorial of a number
            printf("Enter a number: ");
            scanf("%d", &n);

            for(i = 1; i <= n; i++)
            {
                factorial *= i;
            }

            printf("Factorial of %d = %lld\n", n, factorial);
            break;

        case 4:
            // Q4: Count digits in a number
            printf("Enter a number: ");
            scanf("%d", &n);

            int count = 0;
            if(n == 0)
            {
                count = 1;
            }
            else
            {
                while(n != 0)
                {
                    n /= 10;
                    count++;
                }
            }

            printf("Number of digits = %d\n", count);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}