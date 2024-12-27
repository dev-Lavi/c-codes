#include<stdio.h>
int fiboo(int n);
int printfib(int n);
int main () {
    int n;
    printf("enter your nth term\n");
    scanf("%d",&n);
    fiboo(n);
    return 0;
}
int fiboo(int n){
    if(n==1){
        return 0;
    }
        else if (n==2){
            return 1;
    }
    else {
        if(n==1){
            return 0;
        }
        if(n==2){
            return 1;
        }
        int termNm1 = fiboo(n-1);
        int termNm2 = fiboo(n-2);
        int termN = termNm1+termNm2;
        printf("your fibonacii of %d term is %d\n",n,termN);
        return termN;
    }
}
