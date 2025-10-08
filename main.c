#include <stdio.h>

int main(void) {
    int num1, num2;

    // Prompt and read two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);   // %d reads an int, &num1 is the address to store it

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Addition: adds the two integers
    int sum = num1 + num2;
    printf("Addition (num1 + num2): %d + %d = %d\n", num1, num2, sum);

    // Subtraction: subtracts the second from the first
    int diff = num1 - num2;
    printf("Subtraction (num1 - num2): %d - %d = %d\n", num1, num2, diff);

    // Multiplication: multiplies the two integers
    int prod = num1 * num2;
    printf("Multiplication (num1 * num2): %d * %d = %d\n", num1, num2, prod);

    // Integer division: divides and TRUNCATES toward zero
    if (num2 != 0) {
        int quot = num1 / num2;  // integer division (no decimals)
        printf("Integer division (num1 / num2): %d / %d = %d\n", num1, num2, quot);

        // Optional: show real-number division for comparison (not required)
        double real_div = (double)num1 / (double)num2;
        printf("Real division (as double): %d / %d = %.6f\n", num1, num2, real_div);
    } else {
        printf("Integer division: ERROR (division by zero)\n");
    }

    // Modulo: remainder of the integer division
    if (num2 != 0) {
        int mod = num1 % num2;
        printf("Modulo (num1 %% num2): %d %% %d = %d\n", num1, num2, mod);
    } else {
        printf("Modulo: ERROR (modulo by zero)\n");
    }

    // (Optional challenge) Explanation line:
    printf("\nNote: Integer division truncates (cuts off) decimals. Example: 7/3 = 2 (not 2.333...).\n");

    return 0;
}

