#include <stdio.h>
#include <string.h>

int min_digits_to_remove(int n) {
    char digits[20];
    sprintf(digits, "%d", n);
    int len = strlen(digits);
    int diff_count = 0;
    int i;
    for ( i = 1; i < len; i++) {
        if (digits[i] != digits[0]) {
            diff_count++;
        }
    }
    if (diff_count <= 1) {
        return 0;
    }
    int alt1_count = 0, alt2_count = 0;
    for (i = 1; i < len; i++) {
        if (i % 2 == 1 && digits[i] != digits[0]) {
            alt1_count++;
        }
        else if (i % 2 == 0 && digits[i] != digits[1]) {
            alt1_count++;
        }
        if (i % 2 == 0 && digits[i] != digits[0]) {
            alt2_count++;
        }
        else if (i % 2 == 1 && digits[i] != digits[1]) {
            alt2_count++;
        }
    }
    return (alt1_count < alt2_count) ? alt1_count : alt2_count;
}

int main() {
    int n = 12341321;
    int min_removed = min_digits_to_remove(n);
    printf("Minimum digits to be removed: %d\n", min_removed);
    return 0;
}

