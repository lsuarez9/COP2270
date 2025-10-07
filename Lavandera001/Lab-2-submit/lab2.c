#include <stdio.h>

int main() {
    
    // EXERCISE 1: Arithmetic Operations Practice
  
    int num1, num2;
    
    // Prompt user for two integer values
    printf("EXERCISE 1: Arithmetic Operations\n");
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    
    // Perform arithmetic operations and display results
    printf("\nResults:\n");
    
    // Addition: adds the two numbers together
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    
    // Subtraction: subtracts the second number from the first
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    
    // Multiplication: multiplies the two numbers
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    
    // Integer division: divides and returns only the whole number (truncates decimal)
    printf("Integer Division: %d / %d = %d\n", num1, num2, num1 / num2);
    
    // Modulo: returns the remainder after division
    printf("Modulo: %d %% %d = %d\n\n", num1, num2, num1 % num2);
    
    

    
    // EXERCISE 2: Age Classification Using Relational Operators
  
    int age;
    
    printf("EXERCISE 2: Age Classification\n");
    printf("Enter your age: ");
    scanf("%d", &age);
    
    // Check age and classify using relational operators
    if (age < 18) {
        // If age is less than 18, person is a minor
        printf("Classification: Minor\n\n");
    }
    else if (age >= 18 && age <= 64) {
        // If age is between 18 and 64 (inclusive), person is an adult
        printf("Classification: Adult\n\n");
    }
    else {
        // If age is 65 or more, person is a senior
        printf("Classification: Senior\n\n");
    }


    // EXERCISE 3: Entry Logic with Boolean Conditions
   
    
    int hasTicket, isOver18;
    
    printf("EXERCISE 3: Concert Entry Logic\n");
    printf("Do you have a ticket? (1 = yes, 0 = no): ");
    scanf("%d", &hasTicket);
    printf("Are you over 18? (1 = yes, 0 = no): ");
    scanf("%d", &isOver18);
    
    // Use logical AND operator (&&) to check both conditions
    // Entry is granted only if BOTH conditions are true
    if (hasTicket && isOver18) {
        // Both hasTicket AND isOver18 must be 1 (true) for this to execute
        printf("Access granted\n\n");
    }
    else {
        // If either condition is false (0), access is denied
        printf("Access denied\n\n");
    }




    // EXERCISE 4: Understanding Operator Precedence
  
    
    int x = 5, y = 10, z;
    
    printf("EXERCISE 4: Operator Precedence\n");
    printf("Starting values: x = %d, y = %d\n\n", x, y);
    
    // Expression 1: Multiplication has higher precedence than addition
    // So y * 2 is calculated first (10 * 2 = 20), then x is added (5 + 20 = 25)
    z = x + y * 2;
    printf("Result of x + y * 2 = %d\n", z);
    printf("Explanation: Multiplication (*) happens first due to precedence\n");
    printf("Calculation: 5 + (10 * 2) = 5 + 20 = 25\n\n");
    
    // Expression 2: Parentheses force addition to happen first
    // (x + y) is calculated first (5 + 10 = 15), then multiplied by 2 (15 * 2 = 30)
    z = (x + y) * 2;
    printf("Result of (x + y) * 2 = %d\n", z);
    printf("Explanation: Parentheses override precedence, forcing addition first\n");
    printf("Calculation: (5 + 10) * 2 = 15 * 2 = 30\n\n");
    
    // Expression 3: Relational operators combined with logical AND
    // First, relational operators are evaluated: (5 > 3) is true (1), (10 < 15) is true (1)
    // Then logical AND: 1 && 1 = 1 (true)
    z = x > 3 && y < 15;
    printf("Result of x > 3 && y < 15 = %d\n", z);
    printf("Explanation: Both conditions are true, so result is 1 (true)\n");
    printf("Calculation: (5 > 3) AND (10 < 15) = 1 AND 1 = 1\n\n");
    
    // Expression 4: Logical NOT operator
    // First, (x == 5) is evaluated: 5 == 5 is true (1)
    // Then NOT operator inverts it: !(1) = 0 (false)
    z = !(x == 5);
    printf("Result of !(x == 5) = %d\n", z);
    printf("Explanation: x equals 5 is true, but NOT inverts it to false\n");
    printf("Calculation: !(5 == 5) = !(1) = 0\n\n");






    // EXERCISE 5: Assignment Operators in Action

    
    int score = 50;
    
    printf("EXERCISE 5: Assignment Operators\n");
    printf("Starting score: %d\n", score);
    
    // Add 20 to score using += operator
    // This is shorthand for: score = score + 20
    score += 20;
    printf("After score += 20: %d\n", score);
    
    // Subtract 10 from score using -= operator
    // This is shorthand for: score = score - 10
    score -= 10;
    printf("After score -= 10: %d\n", score);
    
    // Multiply score by 3 using *= operator
    // This is shorthand for: score = score * 3
    score *= 3;
    printf("After score *= 3: %d\n", score);
    
    // Divide score by 5 using /= operator
    // This is shorthand for: score = score / 5
    score /= 5;
    printf("After score /= 5: %d\n", score);
    
    printf("\nFinal score: %d\n\n", score);





    return 0;
}