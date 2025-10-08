
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("Lab1");

	//-------------------------------Exercise #1--------------------------------

	// Declare variables of different data types
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	// Create variables to hold the size (in bytes) of each type
	int sizeInt = sizeof(myInt);
	int sizeFloat = sizeof(myFloat);
	int sizeDouble = sizeof(myDouble);
	int sizeChar = sizeof(myChar);

	// Print sizes using the size variables
	printf("Sizes of data types:\n");
	printf("int: %d bytes\n", sizeInt);
	printf("float: %d bytes\n", sizeFloat);
	printf("double: %d bytes\n", sizeDouble);
	printf("char: %d byte\n", sizeChar);

	// Print value limits
	int max_int = INT_MAX;
	int min_int = INT_MIN;
	char max_char = CHAR_MAX;
	char min_char = CHAR_MIN;
	float max_float = FLT_MAX;
	float min_float = FLT_MIN;

	printf("Maximum value of int: %d\n", max_int);
	printf("Minimum value of int: %d\n", min_int);
	printf("Maximum value of char: %d\n", max_char);
	printf("Minimum value of char: %d\n", min_char);
	printf("Maximum value of float: %.10e\n", max_float);
	printf("Minimum value of float: %.10e\n", min_float);

	//--------------------------------------------------------------------------





	printf("Lab1");

	//-------------------------------Exercise #2--------------------------------

    int num = 10;
    float f = num; // implicit conversion

    float pi = 3.14;
    int rounded = (int)pi; // explicit conversion

    char letter = 'A';
    int ascii = letter; // char to int

    printf("Implicit int to float: %f\n", f);
    printf("Explicit float to int: %d\n", rounded);
    printf("Char to int: %d (ASCII of '%c')\n", ascii, letter);

	//--------------------------------------------------------------------------






	printf("Lab1");

	//-------------------------------Exercise #3--------------------------------

    unsigned int max = UINT_MAX;

    printf("Before overflow: %u\n", max);
    max = max + 1;
    printf("After overflow: %u\n", max); // wraps around to 0

    float big = 1.0e9f;
    printf("1.0e20 = %.1f \n", big);
    big = big + 1.0f;
    printf("1.0e10 + 1.0 = %.1f (no change due to precision loss)\n", big);

	//--------------------------------------------------------------------------




	//-------------------------------Exercise #4--------------------------------

    int x = 5;
    float y = 2.5;
    float sum = x + y; // int + float

    char c = 'A'; // ASCII = 65
    int result = c + x;

    printf("int + float = %f\n", sum);
    printf("char + int = %d\n", result); // 65 + 5 = 70



	//--------------------------------------------------------------------------

	return 0;
}