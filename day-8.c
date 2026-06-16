Q29. Print Half Pyramid Pattern
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


Q30. Print Number Triangle
#include <stdio.h>

int main() {
    int n = 5, i, j;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}


Q31. Print Character Triangle
#include <stdio.h>

int main() {
    int n = 5, i, j;

    for(i = 1; i <= n; i++) {
        for(j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}


Q32. Print Repeated-Number Pattern
#include <stdio.h>

int main() {
    int n = 5, i, j;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
