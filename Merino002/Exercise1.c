#include <stdio.h>

int main(void) {
    int num1, num2;

    // Two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Addition
    int sum = num1 + num2;
    printf("Addition (%d + %d) = %d\n", num1, num2, sum);

    // Subtraction
    int diff = num1 - num2;
    printf("Subtraction (%d - %d) = %d\n", num1, num2, diff);

    // Multiplication
    long long prod = (long long)num1 * (long long)num2; 
    printf("Multiplication (%d * %d) = %lld\n", num1, num2, prod);

    // Integer division and modulo:
    if (num2 != 0) {
        int quot = num1 / num2;          
        int mod  = num1 % num2;          
        printf("Integer division (%d / %d) = %d\n", num1, num2, quot);
        printf("Modulo (%d %% %d) = %d\n", num1, num2, mod);

      
        double exact = (double)num1 / (double)num2;
        printf("Real division as double = %.6f (shows the fractional part)\n", exact);
    } else {
        printf("Integer division/modulo by zero is undefined. Choose a nonzero second integer.\n");
    }

    

    return 0;
}
