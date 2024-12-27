#include<stdio.h>
int main() {
    int *ptr;
    int x;
    ptr = &x;
    *ptr = 0;
    printf("%d\n",x);
    
    *ptr += 1;
    printf("%d\n",x);
    
    (*ptr)++;
    printf("%d",x);
    return 0;
}