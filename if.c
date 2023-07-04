#include <stdio.h>

int x = 5;
int y = 6;

int main(void) {
    if (x < y)
    {
        printf("y is greater than x");
    }
    else if (x > y)
    {
        printf("x is greater than y");
    }
    else if (x == y)
    {
        printf("x is equal to y");
    }
}

