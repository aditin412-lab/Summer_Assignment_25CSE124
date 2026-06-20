Q45. Write a program to check Palindrome using Function
#include <stdio.h>

int palindrome(int n)
{
    int rev = 0, temp = n;

    while(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return (rev == n);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(palindrome(num))
        printf("%d is a Palindrome Number", num);
    else
        printf("%d is not a Palindrome Number", num);

    return 0;
}



Q46. Write a program to check Armstrong Number using Function
#include <stdio.h>

int armstrong(int n)
{
    int sum = 0, temp = n, rem;

    while(temp > 0)
    {
        rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    return (sum == n);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}


Q47. Write a program to generate Fibonacci Series using Function
#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}


Q48. Write a program to check Perfect Number using Function
#include <stdio.h>

int perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(perfect(num))
        printf("%d is a Perfect Number", num);
    else
        printf("%d is not a Perfect Number", num);

    return 0;
}