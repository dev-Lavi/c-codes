#include<stdio.h>
int main() {
    int x = 3;
    int *ptr = &x;
    int **ptrr = &ptr;
    printf("%d",**ptrr);
}