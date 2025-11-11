#include <stdio.h>
int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    if (amount >= 2000) {
        printf("2000 x %d\n", amount / 2000);
        amount %= 2000;
    }
    if (amount >= 500) {
        printf("500 x %d\n", amount / 500);
        amount %= 500;
    }
    if (amount >= 200) {
        printf("200 x %d\n", amount / 200);
        amount %= 200;
    }
    if (amount >= 100) {
        printf("100 x %d\n", amount / 100);
        amount %= 100;
    }
    if (amount >= 50) {
        printf("50 x %d\n", amount / 50);
        amount %= 50;
    }
    if (amount >= 20) {
        printf("20 x %d\n", amount / 20);
        amount %= 20;
    }
    if (amount >= 10) {
        printf("10 x %d\n", amount / 10);
        amount %= 10;
    }
    if (amount >= 5) {
        printf("5 x %d\n", amount / 5);
        amount %= 5;
    }
    if (amount >= 2) {
        printf("2 x %d\n", amount / 2);
        amount %= 2;
    }
    if (amount >= 1) {
        printf("1 x %d\n", amount);
    }
    return 0;
}
