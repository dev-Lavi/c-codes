#include<stdio.h>
int swap(int a,int b);
int _swap(int *a,int *b);
int main() {
    int a = 3,b=6;
    swap(a,b);
     printf("a is %d, b is %d\n",a,b);
    _swap(&a,&b);
    printf("a is %d, b is %d",a,b);
    return 0;
}
int swap(int a,int b){
    int t;
    t = a;
    a = b;
    b = a;
    return 0;
}
int _swap(int *a,int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
    return 0;
}