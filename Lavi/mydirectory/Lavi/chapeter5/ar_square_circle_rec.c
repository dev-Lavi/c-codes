#include <stdio.h>
float ar_square(float side); 
float ar_cicle(float radius);
float ar_rectangle(float l,float b);
int main() {
    float radius = 10;
    printf("area of cicle is %f",ar_cicle(radius));
    return 0;
}
float ar_square(float side) {
    return side * side; 
}
float ar_cicle(float radius) {
    return 3.14*radius*radius;
}
float ar_rectangle(float l,float b){
    return l*b;
}
