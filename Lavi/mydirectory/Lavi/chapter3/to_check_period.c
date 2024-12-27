#include<stdio.h>
void main() {
    int d;
    float t;    
    printf("enter the day\n");
    scanf("%d",&d);
    if (d==1) {
            printf("enter time\n");
    scanf("%f",&t);
                 if ((t>=8.30) && (t<9.20)) {
         printf("engg.. maths II");
        }
         else if ((t>=9.20) && (t<10.10)) {
         printf("fund.. of electrical engg");
        }
         else if ((t>=10.10) && (t<11)) {
         printf("programming for problem solving");
        }
         else if ((t>=11) && (t<11.50)) {
              printf("yoga");
        }
         else if ((t>=11.50) && (t<12.40)) {
         printf("eng.. physics");
        }   
         else if ((t>=12.40) && (t<13.30)) {
         printf("environment and ecology");
        }
         else if ((t>=13.30) && (t<14.20)){
        printf("lunch");
        }
        else if ((t>=14.20) && (t<16.00)) {
        printf("electrical lab");
        }
    }
    else if (d==2) {
            printf("enter time\n");
    scanf("%f",&t);
                  if ((t>=8.30) && (t<9.20)) {
         printf("engg.. maths II");
        }
        else if ((t>=9.20)&&(t<10.10)) {
            printf("fund.. of electrical eng..");
        }
         else if ((t>=10.10) && (t<11)) {
         printf("programming for problem solving");
        }
         else if ((t>=11) && (t<11.50)) {
              printf("break");
        }
         else if ((t>=11.50) && (t<12.40)) {
         printf("eng.. physics");
        }   
         else if ((t>=12.40) && (t<13.30)) {
         printf("environment and ecology");
        }
         else if ((t>=13.30) && (t<14.20)){
        printf("lunch");
        }
        else if ((t>=14.20) && (t<15.10)) {
        printf("programming for problem solving");
        }
          else if ((t>=15.10) && (t<=16.00)) {
        printf("college is over");
        }
}
    else if (d==3) {
            printf("enter time\n");
    scanf("%f",&t);
                  if ((t>=8.30) && (t<9.20)) {
         printf("programming for problem solving");
        }
        else if ((t>=9.20)&&(t<10.10)) {
            printf("eng.. physics");
        }
         else if ((t>=10.10) && (t<11)) {
         printf("fund.. of electrical eng..");
        }
         else if ((t>=11) && (t<11.50)) {
              printf("break");
        }
         else if ((t>=11.50)&&(t<13.30)) {
         printf("eng.. physics lab");
        }   
         else if ((t>=13.30) && (t<14.20)){
        printf("lunch");
        }
        else if ((t>=14.20) && (t<=16.00)) {
        printf("eng.. maths");
        }
}
 else if (d==4) {
            printf("enter time\n");
            scanf("%f",&t);
                  if ((t>=8.30) && (t<9.20)) {
         printf("programming for problem solving");
        }
        else if ((t>=9.20)&&(t<10.10)) {
            printf("fund.. of electrical eng..");
        }
         else if ((t>=10.10) && (t<11)) {
         printf("eng.. physics");
        }
         else if ((t>=11) && (t<11.50)) {
              printf("break");
        }
         else if ((t>=11.50) && (t<12.40)) {
         printf("eng.. maths");
        }   
         else if ((t>=12.40) && (t<13.30)) {
         printf("environment and ecology");
        }
         else if ((t>=13.30) && (t<14.20)){
        printf("lunch");
        }
        else if ((t>=14.20) && (t<=16.00)) {
        printf("eng. graphics & design lab");
        }
}
    else if (d==5) {
            printf("enter time\n");
    scanf("%f",&t);
                  if ((t>=8.30) && (t<10.10)) {
         printf("programming lab ");
        }
        else if ((t>=10.10)&&(t<11.00)) {
            printf("eng.. maths");
        }
         else if ((t>=11) && (t<11.50)) {
              printf("break");
        }
         else if ((t>=11.50) && (t<12.40)) {
         printf("eng.. physics");
        }   
        else if ((t>=12.40)&&(t<13.30)) {
            printf("progg.. for problem solving");
        }
         else if ((t>=13.30) && (t<14.20)){
        printf("lunch");
        }
        else if ((t>=14.20) && (t<=16.00)) {
        printf("fund.. of electrical engg.");
        }
}
else {
    printf("happy weekend");
}
}