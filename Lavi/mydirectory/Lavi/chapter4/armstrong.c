#include<stdio.h>
#include<math.h>
int main() {
    int n,r;
    for(int i=1;i<=1000;i++){
        n=i; //dont declare c and s outside the for loop as their values will remain same for other cases of i
        int c=0,s=0; //declare them inside so that their values start from 0 for every case
    //count
    while(n>0){
        n=n/10;
        c++;
    }
    n=i;
    while(n>0){
        r=n%10;
        s=s+pow(r,c);
        n=n/10;
    }
    if(s==i){
        printf("%d\n",i);
    }
    }
    return 0;
}