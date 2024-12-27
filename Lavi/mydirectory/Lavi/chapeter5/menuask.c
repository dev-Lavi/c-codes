#include <stdio.h> //pre processor director
void are_you_hungry(); //printf and scanf are library funtions
void menuasking();
int main() {
    are_you_hungry();
    return 0;
}
void are_you_hungry() {
    char answer;
    printf("are you hungry\n");
    scanf("%c",&answer);
    if(answer == 'y') {
        menuasking();
    }
    else {
        printf("thanks for visiting");
    }
}
void menuasking() {
    printf("what you want to order sir");
}