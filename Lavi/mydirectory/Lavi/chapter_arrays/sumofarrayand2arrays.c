#include<stdio.h>
int main(){
    int a1[99],a2[99],a3[99],size,sum_a1,sum_a2;
    //taking size input
    printf("enter the size of array\n");
        scanf("%d",&size);
    printf("enter elements for a1\n");
    for(int i=0;i<size;i++){
        scanf("%d",&a1[i]);
        sum_a1=sum_a1+a1[i];
    }
    printf("enter elements for a2\n");
    for(int i=0;i<size;i++){
        scanf("%d",&a2[i]);
        sum_a2=sum_a2+a2[i];
    }
    for(int i=0;i<size;i++){
        a3[i]=a1[i]+a2[i];
    }
    printf("sum of a1 is %d\n",sum_a1);
    printf("sum of a2 is %d\n",sum_a2);
    printf("sum array is\n");
    for(int i=0;i<size;i++){
        printf("%d\n",a3[i]);
    }
}