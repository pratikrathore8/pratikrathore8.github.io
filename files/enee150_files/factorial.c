#include <stdio.h>

int main() {
    int i, num;
    int j;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = 1; i < num; i++) {
        j *= i;
    }

    printf("The factorial of %d is %d\n", num, j);

    return 0;
}