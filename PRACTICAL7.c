#include <stdio.h>

int main() {
    int age;
    
    printf("=== Sunrise Amusement Park ===\n");
    printf("Please enter your age: ");
    scanf("%d", &age);
    
    // Using branch statements (if-else)
    if (age <= 12) {
        printf("Age: %d years\n", age);
        printf("Status: FREE ENTRY (Child)\n");
        printf("Welcome! Enjoy your day!\n");
    } else {
        printf("Age: %d years\n", age);
        printf("Status: REGULAR TICKET\n");
        printf("Ticket Price: ₹500\n");
        printf("Please proceed to payment counter.\n");
    }
    printf("Dhairy chauhan (25CE015)");
    
    return 0;
}