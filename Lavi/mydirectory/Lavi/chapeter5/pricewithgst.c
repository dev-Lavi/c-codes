#include <stdio.h>
void calculateprice(float value);
int main () {
float value = 100.00;
calculateprice(value);
printf("price is %f",value); // change in parameter doest not effect the argument
return 0;
}

void calculateprice(float value) { // copy or argument value is here
   value = value + (0.18*value); // no need for flaot before value
   printf("price is %f\n",value);
}