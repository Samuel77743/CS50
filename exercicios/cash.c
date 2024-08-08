#include <stdio.h>
#include <stdlib.h>
#include "..\cs50.h"

int main(void) {
    //Coins: 50c - 25c - 5c and 1c
    float owe = (float) get_float("Owe -> $ ");
    
    float value = 0.0;
    int contCoins = 0;
    while(value < owe){
        if(value + 0.5 <= owe) {
            value += 0.5;
            contCoins++;
            continue;
        }
        else if(value + 0.25 <= owe) {
            value += 0.25;
            contCoins++;
            continue;
        }
        else if(value + 0.05 <= owe) {
            value += 0.05;
            contCoins++;
            continue;
        }
        else if(value + 0.01 < owe) {
            value += 0.01;
            contCoins++;
            continue;
        }
        break;
    }
    
    printf("Quantity counted: %d coins\n\n", contCoins);
    system("pause");
    return 0;
}