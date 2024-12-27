#include <stdio.h>
void main() {
    int n;
    printf("only even numbers are allowed\n");
    do{
        scanf("%d",&n);
        printf("entered number : %d\n",n);
        if((n%2)!=0){
            break;
        }
    } while(1);
    printf("thank you");
}