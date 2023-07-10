#include <stdio.h>

int count_bits(unsigned int *number) {
    int count = 0;

    for (int i = 0; i < 32; i++) {

        if ((*number & (1 << i)) != 0) {
            count++;
        }
    }

    return count;
}

int main() {

    unsigned int number = 10;

    printf("The number of bits set to 1 in %d is: %d\n", number, count_bits(&number));

    return 0;
}
