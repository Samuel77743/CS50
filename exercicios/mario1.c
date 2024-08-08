#include <stdio.h>
#include <stdlib.h>
#include "../cs50.h"


void triangle(int height) {
    int qtd = 1;

    for(int i = 1; i <= height; i++) {
        for(int j = height; j > qtd; j--) {
            printf(" ");
        }
        for(int j = 1; j <= qtd; j++) {
            printf("#");
        }
        qtd++;
        printf("\n");
    }
}
int main(void) {
    printf("--- MARIO PYRAMID ---\n");
    int height = get_int("Height: ");
    while(height < 1 || height > 8) {
        height = get_int("Invalid answer, try again.\nHEIGHT -> ");
    }

    triangle(height);
}