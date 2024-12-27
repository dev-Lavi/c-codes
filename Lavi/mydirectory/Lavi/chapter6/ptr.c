#include<stdio.h>
int main() {
    int year = 2;
    int *ptr = &year;
    int _age = *ptr;
    printf("%d %p %d\n",year,ptr,_age); //%p gives hexadecimal address but %u gives unsight value
    printf("%u",ptr);
    printf("%p %u",&ptr,&ptr); //address of a pointer is also there {type cast value}
    printf("%p\n",&year);
    printf("%d  %d",*ptr,*(&year)); //* gives value of assigned at a pointer
    return 0;
}