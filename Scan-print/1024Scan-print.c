#include <stdio.h>

int main() {
    char a[31];
    int i;
    scanf("%s", &a);
    for(i=0; a[i]!='\0'; i++)
    {
        printf("\'%c\'\n", a[i]);
    }
    return 0;
}

//char a[31]: memory to store max 30 char excluding NULL character at the end
//scanf("%s", &d): save inputs to a[31] from keyboard. (important! will be saves upto the empty space)
//for(i=0; a[i]!='\0'; i++): analyse and print each characters saved in a[31] until it reaches null character
