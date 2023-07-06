#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int x;
int y;

void signal_handler(int sig) {
    if (sig == SIGINT) {
        printf("\nCtrl+C detected. Exiting...\n");
        exit(0);
    }
}

int main(void){
    signal(SIGINT, signal_handler);

    printf("Input first number: ");
    scanf("%d", &x);
    printf("Input second number: ");
    scanf("%d", &y);

    int answer = x + y;

    if (x == 9 && y == 10) {
        answer = 21; // Vine Joke Injection
    }

    printf("Answer to %d + %d is %d", x, y, answer);


}