#include <stdio.h>

int main() {
    int n, sum;
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    printf("Enter the sum of digits: ");
    scanf("%d", &sum);

    if (sum > 9 * n) {
        printf("No such number exists.\n");
        return 0;
    }

    int digits[n];
    int i;
    for (i = 0; i < n; i++) {
        digits[i] = 0;
    }

    i = 0;
    while (sum > 0) {
        if (sum >= 9) {
            digits[i] = 9;
            sum -= 9;
        } else {
            digits[i] = sum;
            sum = 0;
        }
        i++;
    }

    while (i < n) {
        digits[i] = 0;
        i++;
    }

    printf("The largest number with %d digits and sum of digits %d is: ", n, sum);
    for (i = n - 1; i >= 0; i--) {
        printf("%d", digits[i]);
    }
    printf("\n");

    return 0;
}

