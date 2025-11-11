#include <stdio.h>
int main() {
    int sellprice, gprice; printf("Enter the selling price and giving price:"); scanf("%d %d",&sellprice,&gprice);
    printf("Selling price:%d\n, giving price:%d\n, profit:%d\n",sellprice,gprice,gprice-sellprice);
    return 0;
}
