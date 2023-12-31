#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <signal.h>

volatile int keepRunning = 1;

unsigned score = 0;

void handleSignal(int signal) {
    system("cls");
    printf("Exiting Program....");
    if (signal == SIGINT)
        keepRunning = 0;
}

int main() {
    srand(time(NULL));

    signal(SIGINT, handleSignal);

    while (keepRunning) {
        system("cls");
        unsigned number1 = rand() % 12 + 1;
        unsigned number2 = rand() % 12 + 1;

        unsigned useranswer;
        unsigned answer = number1 * number2;

        printf("Score: %u\n\n  %2u\nx %2u\n====\n  ", score, number1, number2);
        scanf("%u", &useranswer);

        if (useranswer == answer) {
            score++;
            system("cls");
            printf("Score: %u+\n\n  %2u\nx %2u\n====\n  ", score, number1, number2);
            printf("\nCorrect! Answer: %u\n", answer);
            sleep(1.5);
        } else {
            if (score > 0) {score--;}
            system("cls");
            printf("Score: %u-\n\n  %2u\nx %2u\n====\n  ", score, number1, number2);
            printf("\nExpected Answer: %u | Received: %u\n", answer, useranswer);
            sleep(2); 
        }

    }

    return 0;
}