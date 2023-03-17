#include <stdio.h>
int main(void) {
    char charType;
    int intType;
    long longIntType;
    double doubleType;
    float floatType;

    // sizeof evaluates the size of a variable
    printf("Size of a char: %zu byte(s)\n", sizeof(charType));
    printf("Size of an int: %zu byte(s)\n", sizeof(intType));
    printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
    printf("Size of a long long int: %zu byte(s)\n", sizeof(doubleType));
    printf("Size of a float: %zu byte(s)\n", sizeof(floatType));

    return 0;
}