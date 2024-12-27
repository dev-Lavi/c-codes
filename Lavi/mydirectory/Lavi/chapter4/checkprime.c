#include<stdio.h>
int main() {
    int n,p=0;
    printf("enter your number\n");
    scanf("%d",&n);
    if(n==0||n==1){
        p=1;
    }
    for(int i=2;i<=n/2;i++) {
        if(n%i==0){
            p=1;
            break;
        }
    }
    if(p==1){
        printf("entered number is not prime");
    }
    else{
        
        printf("entereed number is prime");
    }
    return 0;
}