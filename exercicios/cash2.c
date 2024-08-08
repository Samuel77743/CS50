#include <stdio.h>
#include <stdlib.h>
#include "..\cs50.h"

int main(void) {
    float owe = (float) get_float("Owe -> ");
    
    int contCoins = 0, cont25 = 0, cont10 = 0, cont5 = 0, cont1 = 0;
    float value = 0.0;

    while(!(value + 0.25 > owe)) {
       value += 0.25;
       contCoins++;
       cont25++;
    }

    while(!(value + 0.10 > owe)) {
        value += 0.10;
        contCoins++;
        cont10++;
    }

    while(!(value + 0.05 > owe)) {
        value += 0.05;
        contCoins++;
        cont5++;
    }
    
    while(!(value + (float)0.01 > owe)) {
        value += (float)0.01;
        contCoins++;
        cont1++;
    }

    printf("\nQuantidade de moedas no total: %d\n", contCoins);
    printf("Quantidade de moedas de 25c: %d\n", cont25);
    printf("Quantidade de moedas de 10c: %d\n", cont10);
    printf("Quantidade de moedas de 5c: %d\n", cont5);
    printf("Quantidade de moedas de 1c: %d\n", cont1);
    printf("\nSoma contada -> %.2f", value);
}   