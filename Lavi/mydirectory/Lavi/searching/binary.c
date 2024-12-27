#include <stdio.h>

int main() {
    int n,arr[100],s,m,L,h,p;
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
    L=arr[0];
    h=arr[n-1];
    printf("enter the number you want to search\n");
    scanf("%d",&s);
    while(L<=h){
        m=(L+h)/2;
        if(s==arr[m]){
            p=m;
            break;
        }
        else if(s>arr[m]){
            L=m+1;
        }
        else if(s<arr[m]){
         h=m-1;   
        }
        }
        printf("position is %d",p+1);
    return 0;
}