#include <stdio.h>
int main() {
        int n;
    printf("enter your number\n");
    scanf("%d",&n);
    if(n%2==0){
        printf("number is even\n");
    }
    if (n%2!=0){
        printf("number is odd\n");
    }
    return 0;
}