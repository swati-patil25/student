// sum of sqares of the firt three of which is qual to the sum of the last two //
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number n = ");
    scanf("%d", &n);

    int j = 1;
    int s = 0;
    for (int i = 1; i <= 5; i++) {
        while (j <= 3) {
            s += i * i;
            j = j + 1;
        }
        j = 1; 
    }

    if (s == n) {
        printf("yes");
    } else {
        printf("no");
    }
    printf("\n");
    return 0;
}

