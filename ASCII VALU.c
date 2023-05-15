#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int digit;
    printf("ASCII values of digits in %d: ", n);
    while (n != 0) {
        digit = n % 10;
        printf("%d ", (int) '0' + digit);
        n /= 10;
    }
    printf("\n");
    return 0;
}

