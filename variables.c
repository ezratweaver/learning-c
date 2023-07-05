#include <stdio.h>
#include <stdbool.h>

const char NAME[] = "Ezra";
const char GRADE = 'C';
const short int AGE = 17;
const float GPA = 4.0;

bool active = false;

int main(void){

    printf("Active: %d\n", active);
    printf("Your Name is %s\n", NAME);
    printf("Your Grade is %c\n", GRADE);
    printf("Your Age is %d\n", AGE);
    printf("Your GPA is %0.1f", GPA);

}