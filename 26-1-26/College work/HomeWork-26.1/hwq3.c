#include <stdio.h>
int main() {
    int n, d, found = 0;
    scanf("%d %d", &n, &d);
    while (n > 0) {
        if (n % 10 == d) {
            found = 1;
            break;
        }
        n /= 10;
    }
    if (found)
        printf("Digit found");
    else
        printf("Digit not found");
    return 0;
}
