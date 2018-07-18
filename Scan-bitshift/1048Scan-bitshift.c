#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a<<b);
    return 0;
}

//if 1>>3 means 1 * 2^3

/* logs

1 3
------
8

*/
