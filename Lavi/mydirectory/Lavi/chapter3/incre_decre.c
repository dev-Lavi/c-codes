#include<stdio.h>
void main() {
    int i,j,k,l;
    i=j=k=l=3;
    i++;
    printf("%d   ",i);
    printf("%d\n",i++);
    ++j;
    printf("%d   ",j);
    printf("%d\n",++j);
    k--;
    printf("%d   ",k);
    printf("%d\n",k--);
    --l;
    printf("%d   ",l);
    printf("%d",--l);
}