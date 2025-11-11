#include <stdio.h>
int main() {
    int pay; printf("Enter salary per day:");
    scanf("%d", &pay); printf("Salary per month:%d, Package:%d",pay*30,pay*365);
    return 0;
}
