#include <stdio.h>

int main(void) {
    int x = 5;
    int y = 10;
    int z;

    // Multiplication has higher precedence than addition
    // First y * 2 = 20, then x + 20 = 25
    z = x + y * 2;
    printf("Result of x + y * 2 = %d\n", z); // expected 25

    // Parentheses force addition first: (x + y) = 15, then 15 * 2 = 30
    z = (x + y) * 2;
    printf("Result of (x + y) * 2 = %d\n", z); // expected 30

    // Relational operators (>) and (<) evaluated before logical &&
    // (x > 3) -> (5 > 3) -> 1, (y < 15) -> (10 < 15) -> 1, then 1 && 1 -> 1
    z = x > 3 && y < 15;
    printf("Result of x > 3 && y < 15 = %d\n", z); // expected 1 (true)

    // Equality == evaluated, then logical NOT ! inverts it
    // (x == 5) -> 1, !(1) -> 0
    z = !(x == 5);
    printf("Result of !(x == 5) = %d\n", z); // expected 0 (false)

    return 0;
}
