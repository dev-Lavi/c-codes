#include <stdio.h>
void main() {
    int n,f=1;
    printf("enter the number\n");
    scanf("%d",&n);
    //table
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
    for(int i=0;i<=(n-1);i++){
        f = f*(n-i);
        }
    printf("factorial : %d",f);
}