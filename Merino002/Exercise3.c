#include <stdio.h>

int main(void) {
    int has_ticket; 
    int is_over18;   

    printf("Do you have a ticket? (1 = yes, 0 = no): ");
    scanf("%d", &has_ticket);
    printf("Are you over 18? (1 = yes, 0 = no): ");
    scanf("%d", &is_over18);

    // Access is granted if (has_ticket and is_over18)
    // Deny if (not has_ticket or not is_over18)
    if (has_ticket && is_over18) {            
        printf("Access granted.\n");
    } else if (!has_ticket || !is_over18) {   
        printf("Access denied.\n");
        // Optional explanation:
        if (!has_ticket)  printf("- Reason: No ticket.\n");
        if (!is_over18)   printf("- Reason: Not over 18.\n");
    }

    return 0;
}
