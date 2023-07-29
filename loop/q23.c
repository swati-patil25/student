//number not divisible by by any following number 2,3,4,5,6,7,8,9,10//

     #include <stdio.h>
#include <stdbool.h>

bool is_divisible_by_any(int num) {
    for (int i = 2; i <= 10; i++) {
        if (num % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, count;
    printf("Enter the number n = ");
    scanf("%d", &n);
    
    count = 0;
    for (int i = 1; i <= n; i++) {
        if (!is_divisible_by_any(i)) {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}

