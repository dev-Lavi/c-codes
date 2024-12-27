#include <stdio.h>
int fac(int n);
int main() {
    int n;
    printf("enter your number\n"); //if code does nothing it means that function was not called at all
    scanf("%d",&n);
    printf("the factorial is %d",fac(n));
    return 0;
}

int fac(int n) {
    if (n==1){
        return 1;
    } // dont code for 0 also as 1 - 1 = 0, just code for 0 it will work for both
    else if (n==0){
        return 1;
    }
    int facNm1 = fac(n-1);
    int facN = facNm1*n;
    return facN;
}