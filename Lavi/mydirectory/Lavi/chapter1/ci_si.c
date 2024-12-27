#include<stdio.h>
#include<math.h>
int main () {
float p,n,t,r,c,s,h,g;
printf("enter p\n");
scanf("%f",&p);
printf("enter n\n");
scanf("%f",&n);
printf("enter t\n");
scanf("%f",&t);
printf("enter r\n");
scanf("%f",&r);
s=(p*r*t)/100;
h=1+(r/100);
c=pow(h,n);
g=c*p;
printf("simple interest is %f\n",s);
printf("compound interest is %f\n",g);
}