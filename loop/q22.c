// prime twisted not prime twisted //

#include <stdio.h>

int main() {
    int n, a;
    printf("Enter the number n = ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int c = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                c = c + 1;
            }
        }
        if (c == 2) {
            a = i;
            int s = 0;
            int t = a;
            while (t > 0) {
                int p = t % 10;
                s = s * 10 + p;
                t = t / 10;
            }
            int b = 0;
            for (int i = 1; i <= s; i++) {
                if (s % i == 0) {
                    b = b + 1;
                }
            }
            if (b == 2) {
                printf("twisted = %d\n", a);
            } else {
                printf("not twisted = %d\n", a);
            }
        }
    }
    return 0;
}

