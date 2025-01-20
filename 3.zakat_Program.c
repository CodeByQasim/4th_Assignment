#include <stdio.h>

float calculateZakat(float totalWealth, float ratePerGramGold) {

    float nisabGoldInPKR = 87.48*ratePerGramGold;


    if (totalWealth >= nisabGoldInPKR) {

        float zakat = 0.025 * totalWealth;
        return zakat;
    } else {

        return 0.0;
    }
}

int main() {
    float totalWealth, ratePerGramGold;


    printf("Enter the current rate of 1 gram of gold (in PKR): ");
    scanf("%f", &ratePerGramGold);
    
    printf("Enter the total wealth (in PKR): ");
    scanf("%f", &totalWealth);

    float zakatPayable = calculateZakat(totalWealth, ratePerGramGold);
    
    if (zakatPayable > 0) {
        printf("Zakat Payable = %.2f PKR\n", zakatPayable);
    } else {
        printf("No Zakat is payable.\n");
    }
    
    return 0;
}

