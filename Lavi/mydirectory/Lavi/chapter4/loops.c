#include <stdio.h>
void main() {
    //while loop
    int w=1;
    int sum=0;
    while(w<=5) {
        printf("%d ",w);
        w++;
    }
    //for loop sum of natural numbers
    for(int i=1;i<=9;i++) {
        sum = sum + i;
    }
       printf("sum is %d \n",sum);
//do while loop
//reverse printing
int d = 9;
do {
    printf("%d ",d);
    d--;
} while(d>=1);
}
