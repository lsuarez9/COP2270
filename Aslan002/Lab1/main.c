#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
int main()
{
    //Exercise 1: Data Types Sizes and Limits
    printf("Lab1!\n");

    int age = 34;
   short a = 1;
   long b = 23145667L;
   unsigned int t = 10;
   float d = 2.14f;
   double e = 3.1415965545;
   char r = 'D';

printf("sizeof(age = 34)!\n");
printf("short a = 1!\n");
printf("long b = 23145667L!\n");
printf("float d = 2.14f!\n");
printf("double e = 3.1415965545!\n");
printf("char r = 'D'!\n");


    printf("int: size = %zu bytes, range = %d to %d\n",
           sizeof(int), INT_MIN, INT_MAX);

    printf("short: size = %zu bytes, range = %d to %d\n",
           sizeof(short), SHRT_MIN, SHRT_MAX);

    printf("long: size = %zu bytes, range = %ld to %ld\n",
           sizeof(long), LONG_MIN, LONG_MAX);

    printf("unsigned int: size = %zu bytes, range = 0 to %u\n",
           sizeof(unsigned), UINT_MAX);

    printf("float: size = %zu bytes, range = %.3e to %.3e\n",
           sizeof(float), FLT_MIN, FLT_MAX);

    printf("double: size = %zu bytes, range = %.3e to %.3e\n",
           sizeof(double), DBL_MIN, DBL_MAX);

    printf("char: size = %zu byte, range = %d to %d\n",
           sizeof(char), CHAR_MIN, CHAR_MAX);

//-----------------------------------------------------------------------------
                  //Exercise 2: Type Conversion


    int myInt = 41;
    float myFloat = 3.78f;
    char myChar = 'D';


    float convertedFloat = myInt;
    printf("Implicit conversion (int -> float): %d becomes %.2f\n", myInt, convertedFloat);


    int convertedInt = (int) myFloat;
    printf("Explicit conversion (float -> int): %.2f becomes %d\n", myFloat, convertedInt);


    int asciiValue = myChar;
    printf("Char to ASCII (char -> int): '%c' becomes %d\n", myChar, asciiValue);

//-------------------------------------------------------------------------

                // Exercise 3:Integer Overflow and Precision Loss

    unsigned int u = UINT_MAX;
    printf("Initial unsigned int value: %u\n", u);

    u = u + 1;
    printf("After adding 1 (wrap-around): %u\n", u);

    float bigFloat = 1.0020f;
    printf("\nBig float value: %.1f\n", bigFloat);
    printf("Big float + 1.0: %.1f\n", bigFloat + 1.0f);

//---------------------------------------------------------------------------


                       //Exercise 4:Mixing Data Types in Math

    int x = 5;
    float y = 2.5;
    float sum = x + y; // int + float

    char c = 'A'; // ASCII = 65
    int result = y + x;

    printf("int + float = %f\n", sum);
    printf("char + int = %d\n", result); // 65 + 5 = 70

//----------------------------------------------------------------------------------------------------------------------------

//  Char Data Type- Char hold a value of a character and they have a numeric value on the ASCII table.
// #Define Macros- Are use to create director and in case you have to change something in the code you don't have to code on each line to change it.




     return 0;
}
