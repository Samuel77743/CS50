#include <stdio.h>
#include <stdlib.h>
#include "..\cs50.h"

void triangle(int height) {
    int qtd = 1;
    for(int i = 0; i < height; i++) {

        for(int j = height; j > qtd; j--) 
            printf(" ");
        for(int j = 0; j < qtd; j++)
            printf("#");

        printf("  ");

        for(int j = 0; j < qtd; j++)
            printf("#");
        
        printf("\n");
        qtd++;
    }
}

int main(void) {
    int height = get_int("Height: ");
    
    while(height > 8 || height < 1)
        height = get_int("Invalid answer, Try again.\nHEIGHT: ");

    triangle(height);
}