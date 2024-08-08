#include <stdio.h>
#include <stdlib.h>
#include "../cs50.h"

int main(void) {
    int x = get_int("Write X value -> ");
    int y = get_int("Write Y value -> ");

    if(x < y) {
        printf("\033[31m");
        printf("X(%d) is less than Y(%d)", x, y);
    }
    else if(x > y) {
        printf("\033[32m");
        printf("X(%d) is greater than Y(%d)", x, y);
    }
    else {
        printf("\033[33m");
        printf("X(%d) is equal to Y(%d)", x, y);
    }
    printf("\033[m");
}