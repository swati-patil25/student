// group of student has 20 chocolate bag and 10 condy bag//

#include <stdio.h>

int main() {
    int n, s, p;
    printf("enter the number n =");
    scanf("%d", &n);

    int chob = 10;
    int conb = 5;

    chob = 5;
    conb = 2;

    int i = 1;
    int m = 0;

    while (i <= chob) {
        p = chob * i;
        m += p;  
        i = i + 1;
    }

    int j = 1;
    while (j <= conb) {
        s = conb * j;
        m += s;  
        j = j + 1;
    }

    printf("%d\n", m);
    return 0;
}

