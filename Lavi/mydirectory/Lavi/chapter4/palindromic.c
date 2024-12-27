#include <stdio.h>
void main() {
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            printf(" ");
        }
        for(int j=i+1;j>=1;j--){
            printf("%d",j);
        }
        for(int j=2;j<=i+1;j++){
            printf("%d",j);
        }
        printf(" \n");
    }
}