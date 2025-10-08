#include <stdio.h>

int main(void) {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // Guard against negative ages (optional)
    if (age < 0) {
        printf("Invalid age.\n");
        return 0;
    }

    // If / else-if / else with relational operators
    if (age < 18) { // checks "less than 18"
        printf("Classification: Minor\n");
    } else if (age <= 64) { // at this point age is >= 18, so 18..64
        printf("Classification: Adult\n");
    } else { // age >= 65
        printf("Classification: Senior\n");
    }

    return 0;
}
