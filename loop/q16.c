#include <stdio.h>

int f (int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * f (num - 1);
}

int j (int num) {
    int m = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += f (digit);
        num /= 10;
    }

    return sum == m;
}

int main() {
    int n;
    printf("Enter the number n: ");
    scanf("%d", &n);

    printf("Strong number = %d\n", n);
    for (int i = 100; i <= n; i++) {
        if (j(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

