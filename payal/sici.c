#include<stdio.h>
#include<math.h>
int main(){
float p,r,t,a,b,c,n,si,ci;
printf("enter p");
scanf("%f",&p);
printf("enter r");
scanf("%f",&r);
printf("enter t");
scanf("%f",&t);
printf("no of times interest applied");
scanf("%f",&n);
si=(p*r*t)/100;
a=(1+r/n);
b=pow(a,n*t);
c=p*b;
printf("ci is %f",c);
printf("si is %f",si);
}