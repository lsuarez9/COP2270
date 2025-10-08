 #include <stdio.h>
 #include <stdlib.h>
 
 
 int main()
 {
  
 
    // Arithmetic Operations
 
 int a = 9,b = 4, c;
    c = a + b;
    printf("a + b = %d\n", c);

    c = a - b;
    printf("a - b = %d\n", c);

    c = a * b;
    printf("a * b = %d\n", c);

    c = a / b;
    printf("a / b = %d\n", c);

    c = a % b;
    printf("a %% b = %d\n", c);

    printf("Remainder when divided by b = %d\n",c);

// Assignment Operations

   
    c = a;
    printf("c = %d\n", c);

    c += a;
    printf("c = %d\n", c);

    c -= a;
    printf("c = %d\n", c);

    c *= a;
    printf("c = %d\n", c);

    c /= a;
    printf("c = %d\n", c);

    c %= a;
    printf("c = %d\n", c);

// Relational Operations

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);


// Logical Operations

    int result;

    result = (a == b) && (c > b);

    printf("(a == b) && (c > b) is %d \n", result);
    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);
    result = !(a != b);
    printf("!(a != b) is %d \n", result);



    return 0;

 }