#include <stdio.h>

int main() {
    double a;
    scanf("%lf", &a);
    printf("%.11lf", a);
    return 0;
}

//float: range is 3.4*10^-38 ~ 3.4*10^38
//double: range is 1.7*10^-308 ~ 1.7*10^308
//%lf: for double float
