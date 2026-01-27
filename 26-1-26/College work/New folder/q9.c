#include <stdio.h>
int main() {
    int a,b; scanf("%d %d",&a,&b);
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }int lcm = (a*b)/a;
    printf("%d",lcm);
    return 0;
}