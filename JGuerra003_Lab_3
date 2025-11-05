#include <stdio.h>

// function to show the menu
void showMenu() {
    printf("\n===== ATM MENU =====\n");
    printf("1. Check balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    const int CORRECT_PIN = 1234;
    int enteredPin;
    int choice;
    double balance = 100.00;   // starting balance
    double amount;
    int keepRunning = 1;       // controls the while loop

    // 1. ask for PIN
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &enteredPin);

    // 2. check PIN
    if (enteredPin != CORRECT_PIN) {
        printf("Incorrect PIN. Access denied.\n");
        return 0; // end the program
    }

    // if we reach here, PIN was correct
    printf("PIN accepted. Welcome!\n");

    // 3. keep showing menu until user chooses to exit
    while (keepRunning) {
        // show the menu
        showMenu();

        // get user choice
        scanf("%d", &choice);

        // 4. handle choice with switch
        switch (choice) {
            case 1:
                // check balance
                printf("Your current balance is: $%.2f\n", balance);
                break;

            case 2:
                // deposit
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                balance = balance + amount;
                printf("Deposit successful. New balance: $%.2f\n", balance);
                break;

            case 3:
                // withdraw
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                balance = balance - amount;   // lab says no overdraft check needed
                printf("Withdrawal successful. New balance: $%.2f\n", balance);
                break;

            case 4:
                // exit
                printf("Thank you for using the ATM. Goodbye!\n");
                keepRunning = 0;  // this will end the while loop
                break;

            default:
                // invalid option
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
