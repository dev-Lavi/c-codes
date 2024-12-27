#include<stdio.h>
void main() {
char ch;
printf("enter your character\n");
scanf("%c",&ch);
if(ch>='a'&&ch<='z') {
    printf("entered character is lowercase alphabet\n");
}
else if(ch>='A'&&ch<='Z') {
    printf("entered character is upperase alphabet\n");
}
else {printf("entered character is symbol not letter\n");}
}