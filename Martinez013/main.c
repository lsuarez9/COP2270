/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float balance = 100.00;
    
void showMenu(){
        printf ("Welcome to the ATM. ");
        printf ("1.Check Balance ");
        printf ("2.Deposit ");
        printf ("3.Withdraw ");
        printf ("4.Exit ");
    }
    
void checkBalance() {
    printf ("Your current Balance is: $%.2f ", balance);
}

void deposit() {
    float amount;
    printf ("Enter amount to deposit: $");
    scanf ("%f", &amount);
    if (amount > 0) {
        balance += amount;
        printf ("Deposit successful. ");
    } else {
        printf ("Invalid deposit amount. ");
    }
}

void withdraw() {
    float amount;
    printf ("Enter amount to withdraw: $");
    scanf ("%f", &amount);
    if (amount > 0) {
        balance -= amount;
        printf ("Withdrawal successful. ");
    } else {
        printf ("Invalid withdrawal amount. ");
    }
}

int main()
{
    
     int enteredPIN;
    const int correctPIN = 1234;

    printf ("Welcome to the ATM");
    printf ("Enter your 4-digit PIN:");
    scanf ("%d", &enteredPIN);

    if (enteredPIN == correctPIN) {
        printf ("Access granted. ");
        int choice;
        while (1) {
            showMenu();
            scanf ("%d", &choice);
            switch (choice) {
                case 1:
                    checkBalance();
                    break;
                case 2:
                    deposit();
                    break;
                case 3:
                    withdraw();
                    break;
                case 4:
                    printf ("Thank you for using the ATM! ");
                    return 0;
                default:
                    printf ("Invalid choice. Please try again ");
            }
        }
    } else {
        printf ("Incorrect PIN. Access denied. ");
    }


    return 0;
}
