#include <stdio.h>

int main(void) {
    int value = 2.26, owe = 2.27;

    printf("%d", (value + 0.01 > owe));
}