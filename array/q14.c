#include <stdio.h>

int main() {
    int n, m, sub;
    printf("enter the number n = ");
    scanf("%d", &n);

    sub = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("enter element %d: ", i + 1);
        scanf("%d", &m);
        arr[i] = m;
    }

    sub = arr[0];
    for (int i = 1; i < n; i++) {
        sub = sub - arr[i];
    }

    printf("sub = %d\n", sub);
    return 0;
}

