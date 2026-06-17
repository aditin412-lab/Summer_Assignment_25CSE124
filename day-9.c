Q33. Reverse Star Pattern
#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


Q34. Reverse Number Triangle
#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

Q35. Repeated Character Pattern
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + i - 1);
        }
        printf("\n");
    }

    return 0;
}


Q36. Hollow Square Pattern
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}