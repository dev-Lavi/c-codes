#include <stdio.h>
void main() {
    int n,sum=0;
    printf("enter number up to which sum is calculated\n");
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        printf("%d \n",i);
        sum = sum + i;
    }
    printf("sum : %d",sum);
}