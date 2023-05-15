#include <stdio.h>

int main() {
    int n ; 
    int sum ; 
    int i, j;
    
    printf("Number of digits:");
    scanf("%d",&n);
    int num[n];
    printf("Sum of digits:");
    scanf("%d",&sum);
    
    for (i = 0; i < n; i++) {
        num[i] = 0;
    }
    
    for (i = n - 1; i >= 0; i--) {
        j = sum > 9 ? 9 : sum; 
        if (i == 0) { 
            j = sum - 1;
        }
        num[i] += j;
        sum -= j;
        if (sum == 0) { 
            break;
        }
    }
    
    printf("The smallest number with %d digits and sum of digits %d is: ", n, sum+j);
    for (i = 0; i < n; i++) {
        printf("%d", num[i]);
    }
    printf("\n");
    return 0;
}

