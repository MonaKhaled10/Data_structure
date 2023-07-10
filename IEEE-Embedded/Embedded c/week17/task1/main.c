#include <stdio.h>

void set_bit(unsigned int *register_ptr, int bit_number) {
    unsigned int mask = 1 << bit_number;
    *register_ptr |= mask;
}

void clear_bit(unsigned int *register_ptr, int bit_number) {
    unsigned int mask = ~(1 << bit_number);
    *register_ptr &= mask;
}

void toggle_bit(unsigned int *register_ptr, int bit_number) {
    unsigned int mask = 1 << bit_number;
    *register_ptr ^= mask;
}

int main() {

    unsigned int my_register=0;

    set_bit(&my_register, 0);
    printf("The value of the register after setting is: %d\n", my_register);


    clear_bit(&my_register, 0);
    printf("The value of the register after clearing is: %d\n", my_register);


    toggle_bit(&my_register, 0);
    printf("The value of the register after toggling is: %d\n", my_register);

    return 0;
}
