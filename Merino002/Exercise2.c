#include <stdio.h>

int main(void) {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // Basic check
    if (age < 0) {
        printf("Age cannot be negative.\n");
        return 0;
    }

    // Minor if age < 18
    // Adult if 18 <= age <= 64
    // Senior if age >= 65
    if (age < 18) {                           
        printf("Classification: Minor\n");
    } else if (age <= 64) {                   
        printf("Classification: Adult\n");
    } else {                                  
        printf("Classification: Senior\n");
    }

    return 0;
}
