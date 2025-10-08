#include <stdio.h>

int main(void) {
    int has_ticket; // 1 = yes, 0 = no
    int over_18;    // 1 = yes, 0 = no

    printf("Do you have a ticket? (1 = yes, 0 = no): ");
    scanf("%d", &has_ticket);

    printf("Are you over 18? (1 = yes, 0 = no): ");
    scanf("%d", &over_18);

    // Logical AND: both must be true (1) for access
    // We compare to 1 so that any non-1 value is treated as 'no' for this lab.
    int can_enter = (has_ticket == 1) && (over_18 == 1);

    if (can_enter) {
        printf("Access granted.\n");
    } else {
        printf("Access denied.\n");
    }

    // Explanation
    printf("\nLogic used: Access = (has_ticket == 1) && (over_18 == 1)\n");
    printf("Both conditions must be true for entry. If either is false, access is denied.\n");
    // Extra notes (not required):
    //   || is OR (true if either side is true)
    //   ! is NOT (inverts: !1 -> 0, !0 -> 1)

    return 0;
}
