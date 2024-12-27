#include <stdio.h>
    int main () {
        int n;
        printf("enter your number\n");
        scanf("%d",&n);
        if (n<0) {
            printf("%d\n",-n);
        }
        if (n>=0) {
            printf("%d\n",n);
        }
        return 0;
    }