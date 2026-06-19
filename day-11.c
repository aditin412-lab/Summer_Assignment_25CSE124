Q41. Function to Find Sum of Two Numbers
#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum = %d", sum(num1, num2));

    return 0;
}
Q42. Function to Find Maximum of Two Numbers
#include <stdio.h>

int maximum(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum = %d", maximum(num1, num2));

    return 0;
}
Q43. Function to Check Prime Number
#include <stdio.h>

int isPrime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num))
        printf("%d is a Prime Number", num);
    else
        printf("%d is not a Prime Number", num);

    return 0;
}
Q44. Function to Find Factorial
#include <stdio.h>

long long factorial(int n)
{
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %lld", factorial(num));

    return 0;
}