#include <stdio.h>

int main() {
    int price, magoes, pay;
    printf("Enter price per mango and total magoes: ");
    scanf("%d %d", &price, &magoes);

    pay = price * (magoes - magoes / 3);

    printf("Total amount to pay: %d\n", pay);
    return 0;
}
