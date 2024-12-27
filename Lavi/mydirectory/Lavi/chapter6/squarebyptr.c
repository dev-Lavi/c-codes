#include<stdio.h>
int square(int n);
int _square(int *n);
int main() {
    int number = 3;
    square(number);
     printf("%d\n",number);
    _square(&number);
    printf("%d\n",number);
    return 0;
}
int square(int n){
    n = n*n;
    printf("%d\n",n);
    return 0;
}
int _square(int *n){
    *n = (*n)*(*n);
    printf("%d\n",*n);
    return 0;
}