#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a+b+c);
    printf("%.1f", (float)(a+b+c)/3);
    return 0;
}

/* logs

1 2 3
----------
6
2.0

*/
