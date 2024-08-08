// Prompt for Input
// Calculate checksum
// Check card length and starting digits
// Print: Amex, MasterCard, Visa or INVALID

// 1 - Amex -> 15 digits - starting with 34 or 37
// 2 - MC -> 16 digits - starting with 51 until 55
// 3 - Visa -> 13 and 16 digits - starting with 4

// Furthermore, it's necessary to comply with "CHECKSUM"
// CHECKSUM
// 1 - Multiply each numbers starting second-to-last by 2, and jumping 2 - 2
// 2 - Add that product to numbers not multiplied by 2
// 3 - if the last algarism wouldn't be 0, is not valid

#include <stdio.h>
#include <stdlib.h>
#include "../cs50.h"
#include <math.h>

int countDigits(int n) {
    if(n == 0)
        return 1;
    return (int)log10(n) + 1;
}

int checksum(int n, int digitsAmount) {
    // 1º Multiply each number by 2, starting from second-to-last
    // (Jumping 2 in 2)
    // 2º Sum each algarism
    // 3º Sum with the other number which did not
    //Secret: use / and %

    int div = 10;
    int actualAlgarism = n / div % 10; //Second-to-last
    int acumMult = 0;

    for(int i = digitsAmount - 1; i > 0; i -= 2) {
        while(actualAlgarism != 0) {
            
        }
    }
    for(int i = digitsAmount; i > 0; i -= 2) {

    }

}

int main(void) { 
    printf("''''CREDIT''''\n");
    int answer = get_int("CREDIT NUMBER: ");
    int digitsAmount = countDigits(answer);
    
    if(
    digitsAmount != 13 ||
    digitsAmount != 15 ||
    digitsAmount != 16)
        printf("Invalid quantity of digits!\n");
    
    else {

        int firstNumber = (int) pow(10, digitsAmount - 1) % 10;
        int twoNumbers = answer;
        while(twoNumbers <= 100)
            twoNumbers /= 10; //Reduce to 2 digits
        
        if(not(
            firstNumber == 4 ||
            (twoNumbers == 34 || twoNumbers == 37)) ||
            (twoNumbers >= 51 && twoNumbers <= 55))
                printf("Unknown Prefix");     

        else {
            //Amex
            if(
                digitsAmount == 15 &&
                (twoNumbers == 34 || twoNumbers == 37)
            ) {
                checksum(answer, digitsAmount);
            }
        }
    }
}