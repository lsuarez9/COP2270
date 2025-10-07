#include <stdio.h>

int main(void) {
    int x = 5, y = 10, z;

    // So y * 2 happens first, then x + result.
    z = x + y * 2;   
    printf("Result of x + y * 2 = %d\n", z);  

    //  Parentheses override precedence, so (x + y) is done first.
    z = (x + y) * 2; 
    printf("Result of (x + y) * 2 = %d\n", z); 

    
    // x > 3 is true and y < 15 is true ; then 1 && 1 yields 1.
    z = x > 3 && y < 15; 
    printf("Result of x > 3 && y < 15 = %d\n", z); 

    // x == 5 is true, !1 becomes 0 (false).
    z = !(x == 5); 
    printf("Result of !(x == 5) = %d\n", z); 


    return 0;
}
