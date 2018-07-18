#include <stdio.h>

int main() {
    unsigned int a;
    scanf("%u", &a);
    printf("%u", ++a);
    return 0;
}

/* logs

2147483647
-----------
2147483648

*/
