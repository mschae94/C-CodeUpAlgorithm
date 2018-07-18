#include <stdio.h>

int main() {
    char a[2001];
    fgets(a, 2000, stdin);
    printf("%s", a);
    return 0;
}

//char a[2001]: allow letters upto 2000
//fgets(a, 2000, stdin): fgets function allows variable a to have letters upto 2000 using keyboard stdin
