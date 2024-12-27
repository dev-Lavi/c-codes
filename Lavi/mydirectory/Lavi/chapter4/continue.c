#include <stdio.h>
void main() {
    int n;
    printf("enter number which need to be skipped\n");
    scanf("%d",&n);
        for(int i=1;i<=10;i++){
        if(i==n){
            continue;
        }
          printf("%d ",i);
        }
        }