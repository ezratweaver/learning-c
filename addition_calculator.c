#include <stdio.h>

int x;
int y;

int main(void){

    printf("Input first number: ");
    scanf("%d", &x);
    printf("Input second number: ");
    scanf("%d", &y);
    
    int answer = x + y;

    printf("Answer to %d + %d is %d", x, y, answer);


}