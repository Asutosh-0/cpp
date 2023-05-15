#include <stdio.h>

int main() {
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    int i, j, k, digit, found;
    for (i = n - 1; i > 0; i--) {
        int digits[10] = {0};
        digit = i;
        found = 1;
        while (digit > 0) {
            j = digit % 10;
            if (digits[j]) {
                found = 0;
                break;
            }
            digits[j] = 1;
            digit /= 10;
        }
        if (found) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("No such number exists\n");
    return 0;
}

