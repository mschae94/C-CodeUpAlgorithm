#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);
    printf("%.2f", (float)a/b);
    return 0;
}

/* logs

10 3
--------
13
7
30
3
1
3.33

*/
