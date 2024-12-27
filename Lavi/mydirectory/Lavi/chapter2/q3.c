#include <stdio.h>
int main () {
    int a;
    printf("enter your age\n");
    scanf("%d",&a);
    if (a>18) {
        printf("you can drive\n");
    }
    else {
        printf("you can't drive");
    }

    return 0;
}