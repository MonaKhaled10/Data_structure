#include <stdio.h>

typedef int (*func_ptr)(int, int);

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mult(int x, int y) {
    return x * y;
}

int div(int x, int y) {
    return x / y;
}

int main() {
    int x, y;
    func_ptr my_func;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    while (1) {
        printf("Select operation: ");
        printf("\n1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        scanf("%d", &my_func);

    switch ((int) my_func) {
        case 1:
            printf("add(%d, %d) = %d\n", x, y, add(x, y));
            break;
        case 2:
            printf("sub(%d, %d) = %d\n", x, y, sub(x, y));
            break;
        case 3:
            printf("mult(%d, %d) = %d\n", x, y, mult(x, y));
            break;
        case 4:
            printf("div(%d, %d) = %d\n", x, y, div(x, y));
            break;
        default:
            printf("Invalid operation\n");
            break;
    }
}
    return 0;
}
