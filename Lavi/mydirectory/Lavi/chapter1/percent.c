#include <stdio.h>
#include <math.h>
int main () {
int a,b,c;
printf("type marks in subject 1\n");
scanf("%d",&a);
printf("type marks in subject 2\n");
scanf("%d",&b);
printf("type marks in subject 3\n");
scanf("%d",&c);
printf("your percentage is\n");
float d =(a+b+c)/3;
printf("%f",d);
    return 0;
}