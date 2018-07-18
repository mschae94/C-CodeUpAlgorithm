#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d.%d.%d", &a, &b, &c);
    printf("%04d.%02d.%02d", a, b, c);
    return 0;
}

//%02d prints 11 if scan 11 and 05 if scan 5
