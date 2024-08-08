#include <stdio.h>
#include <stdlib.h>
#include "../cs50.h"

int main(void) {
    //Addition
    int num1 = get_int("First number: ");
    int num2 = get_int("Second number: ");

    printf("%i + %i = %i", num1, num2, num1 + num2);
}