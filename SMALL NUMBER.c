#include <stdio.h>

int main() {
    int n_digits = 5; // number of digits
    int sum = 20; // desired sum
    int digits[n_digits];
    int i, j;
    // fill with smallest digit
    for (i = 0; i < n_digits; i++) {
        digits[i] = 1;
    }
    // add larger digits to reach desired sum
    for (i = 0; i < n_digits && sum > n_digits; i++) {
        int diff = sum - n_digits;
        if (diff >= 8) { // can add 9
            digits[i] = 9;
            sum -= 9;
        }
        else { // add remaining sum
            digits[i] += diff;
            sum -= diff;
        }
    }
    // add remaining sum to last digit
    if (sum > 0) {
        digits[n_digits - 1] += sum;
    }
    // print the result
    printf("Smallest number with %d digits and sum of digits %d: ", n_digits, sum);
    for (i = 0; i < n_digits; i++) {
        printf("%d", digits[i]);
    }
    printf("\n");
    return 0;
}

