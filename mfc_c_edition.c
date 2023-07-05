#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <signal.h>

volatile int keepRunning = 1;

unsigned score = 0;

void handleSignal(int signal) {
    if (signal == SIGINT)
        keepRunning = 0;
}

int main(void) {
    srand(time(NULL));

    signal(SIGINT, handleSignal);

    while (keepRunning) {
        system("cls");
        unsigned number1 = rand() % 12 + 1;
        unsigned number2 = rand() % 12 + 1;

        unsigned useranswer;
        unsigned answer = number1 * number2;

        printf("Score: %d\n\n  %2d\nx %2d\n====\n  ", score, number1, number2);
        scanf("%u", &useranswer);

        if (useranswer == answer) {
            printf("\nCorrect! Answer: %d\n", answer);
            score++;
            sleep(1.5);
        } else {
            printf("\nExpected Answer: %u | Received: %u\n", answer, useranswer);
            sleep(2);
        }

    }

    return 0;
}