#include<stdio.h>
void main() {
    int bn[39];
    int n;
    //to store binary
    int i=0;
    //counter  
    printf("enter your number\n");
    scanf("%d",&n);
    while(n>0){
        bn[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",bn[j]);
    }
}