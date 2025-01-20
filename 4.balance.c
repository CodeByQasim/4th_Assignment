#include <stdio.h>
#include<conio.h>

float remainingBalance(float amount) {
    float FED = (19.5/100) * amount;
    float serviceCharge = (10.0/100) * amount;
    float remainingBalance = amount - (FED + serviceCharge);
    
    return remainingBalance;
}

void main() {
    float amount;

    printf("Enter the recharge amount (in PKR): ");
    scanf("%f", &amount);
    
    float availableBalance = remainingBalance(amount);

    printf("Available Balance = %.2f PKR\n", availableBalance);
    
    getch();
}

