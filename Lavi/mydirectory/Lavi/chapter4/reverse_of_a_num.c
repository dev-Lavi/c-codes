#include<stdio.h>
int main() {
    int n,r,rev=0;
    printf("enter your number\n");
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        rev = 10*rev+r*10;
        n=n/10;
    }
    printf("reverse is %d",rev/10);
    return 0;
}