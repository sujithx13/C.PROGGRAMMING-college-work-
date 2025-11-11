#include <stdio.h>
#include<stdlib.h>
int main() {
    int sellprice, gprice, loss; printf("Enter the selling price and giving price:"); scanf("%d %d",&sellprice,&gprice);
    if((gprice-sellprice)<0) loss=gprice-sellprice;
    else loss=0;
    printf("Selling price:%d\ngiving price:%d\nloss:%d\n",sellprice,gprice,abs(loss));
    return 0;
}
