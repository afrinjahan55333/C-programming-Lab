#include <stdio.h>
float calculateDiscount(float amount) {
    if (amount >= 5000) return amount*0.10;
    else if (amount >= 3000) return amount*0.05;
    else 
      return 0;
}
float calculateFinalAmount(float amount, float discount) {
    return amount-discount;
}
void displayReceipt(char name[], float amount, float discount, float finalAmount) {
    printf("\n------ Receipt ------\n");
    printf("Customer Name : %s\n", name);
    printf("Purchase Amount: Tk %.2f\n", amount);
    if (amount >= 5000) 
      printf("Discount (10%%) : Tk %.2f\n", discount);
    else if (amount>=3000) 
      printf("Discount (5%%) : Tk %.2f\n", discount);
    else 
      printf("Discount (0%%) : Tk 0.00\n");
    printf("Final Payable : Tk %.2f\n", finalAmount);
}
int main() {
    char name[50];
    float amount;
    printf("Enter customer name: ");
    scanf(" %[^\n]", name);
    printf("Enter purchase amount: ");
    scanf("%f", &amount);
    if (amount<0) {
        printf("Invalid amount!\n");
        return 0;
    }
    float discount = calculateDiscount(amount);
    float finalAmount = calculateFinalAmount(amount, discount);
    displayReceipt(name, amount, discount, finalAmount);
    return 0;
}