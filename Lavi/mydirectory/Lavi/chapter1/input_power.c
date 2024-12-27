#include <stdio.h>
#include <math.h>
void main ()
 {
    int a,b,power;
    printf("enter your number\n");
    scanf("%d",&a); 
    printf("enter your power\n");
    scanf("%d",&b);
    power = pow(a ,b);
    printf("%d",power);
}