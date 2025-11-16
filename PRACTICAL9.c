#include <stdio.h>

int main() {
    float totalAmount, discount = 0, finalAmount;
    
    // Read the total shopping amount from the user
    printf("Enter the total shopping amount: ₹");
    scanf("%f", &totalAmount);
    
    // Determine the discount based on the total amount
    if (totalAmount > 5000) {
        discount = totalAmount * 0.20;  // 20% discount
    } else if (totalAmount >= 1000) {
        discount = totalAmount * 0.10;  // 10% discount
    }
    // No discount is applied if totalAmount < 1000
    
    // Calculate the final amount after discount
    finalAmount = totalAmount - discount;
    
    // Display the results
    printf("\nTotal Amount: ₹%.2f\n", totalAmount);
    printf("Discount Applied: ₹%.2f\n", discount);
    printf("Final Amount to Pay: ₹%.2f\n", finalAmount);
    printf("25CE015 dhairy chauhan ");
    
    return 0;
}