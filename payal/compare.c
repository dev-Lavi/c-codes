#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b ,c;
    
    printf("enter a=""enter b=""enter c=");
    scanf("%d%d%d",&a&b&c);
    (a>b)?(a>c?printf("a is greater"):printf("c is greater")):(b>c?printf("b is greater"):printf("c is greater"));
   getch(); 
    
}