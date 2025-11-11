#include <stdio.h>
int main() {
    int price, quantity, payable;
    printf("Enter price per pen, tot quantity: ");
    scanf("%d %d",&price,&quantity);
    payable = price*(quantity- (quantity / 5) * 2);
    printf("Total amount to pay: %d\n", payable);
    return 0;
}
