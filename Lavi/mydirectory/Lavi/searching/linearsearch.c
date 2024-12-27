// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n,arr[100],s,j,f;
    printf("enter your array size\n");
    scanf("%d",&n);
    printf("enter your elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("your array is\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    printf("enter the number you want to search\n");
    scanf("%d",&s);
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            f=1;
            j=i+1;
            break;
        }else{
            f=0;
        }
    }
    if(f==0){
        printf("element not found");
    }
    else{
        printf("position of the element is %d",j);
    }
    return 0;
}