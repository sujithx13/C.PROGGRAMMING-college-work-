#include <stdio.h>
int main() {
    float bill;
    printf("Enter the amount:"); scanf("%f",&bill);
    for(int i=0;i<3;i++)
    printf("Person %d = %.1f\n",i,bill/3);

    return 0;
}
