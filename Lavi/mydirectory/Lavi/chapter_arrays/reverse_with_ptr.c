#include <stdio.h>
void reverse(int arr[],int n);
int printrev(int arr[],int n);
int main() {
   int arr[] = {1,2,3,4,5};
   reverse(arr,5);
   printrev(arr,5);
}
int printrev(int arr[],int n) {
    int *ptr = &arr[0];
    for(int i=0;i<n;i++){
        printf("%d\t",*ptr+i);
    }
}

void reverse(int arr[],int n){
      int *ptr = &arr[0];
    for(int i=0;i<n/2;i++){
        int firstval = *ptr+i;
        int secondval = *ptr+n-1-i;
        arr[i] = secondval;
        arr[n-1-i] = firstval;
    }
}