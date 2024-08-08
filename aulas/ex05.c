#include <stdio.h>
#include <stdlib.h>
#include "../cs50.h"

int main(void) {
    int x = get_float("X value: ");
    int y = get_float("Y value: ");

    //Casting, if I did't that, answer would suffer truncation
    float z = (float) x/y;

    printf("\nZ value ---> %.2f", z);
    int j = (int) 'A'; 
    printf("\nZ value ---> %d", j); 
}