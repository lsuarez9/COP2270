/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello World");
    
     /////////////Exercise 1: Arithmetic Operations Practice///////////////////////

    int a = 5, b = 10;
    printf("Enter a number a\n");
    scanf("%d", &a);
    printf("b");
    scanf("%d", &b);
    printf("add: %d + %d = %d\n", a, b, a + b);
    printf("Subtract: %d - %d = %d\n", a, b, a - b);
    printf("Multiply: %d * %d = %d\n", a, b, a * b);
    printf("Divided: %d / %d = %d\n", a, b, a / b);
    printf("Modulo: %d %% %d = %d\n", a, b, a % b);

    ///////////Exercise 2: Age Classification Using Relational Operators/////////////////////

    int age = 23;
    printf("Enter your age: c");
    scanf("%d, c");
    if (age < 18)
        printf("You are classified as a Minor. \n");
    else if (age >= 18 && age <= 64)
        printf("You are classified as a Adult. \n");
    else
        printf("You are classified as a Senior. \n");

    ////////////Exercise 3: Entry Logic with Boolean Conditions////////////////

    int hasTicket;
    int isOver18;
    printf("Do you have a ticket? (1 = yes, 2 = no):");
    scanf("%d", &isOver18);
    if (hasTicket && isOver18)
        printf("Can Enter. \n");
    else
    printf("Can not Enter. \n");

    //////////Exercise 4: Understanding Operator Precedence///////////////
    
    int x = 5;
    int y = 10;
    int z;
    z = x + y * 2;
    printf("Result of x + y * 2: %d\n", z);
    z = (x + y) * 2;
    printf("Result of (x + y) * 2: %d\n", z);
    z = x > 3 && y < 15;
    printf("Result of x > 3 && y < 15: %d\n", z);
    z = !(x == 5);
    printf("Result of !(x == 5): %d\n", z);
    
    ///////////Exercise 5: Assignment Operators in Action/////////////////////
    
    int score = 50;
    score += 20;
    score -= 10;
    score *= 3;
    score /= 5;
    printf("The final value of score: %d\n", score);

    return 0;
}