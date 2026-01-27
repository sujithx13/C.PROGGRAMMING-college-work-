/* Armstrong==> say 153(input), count digits and raise that to the power of each digit and then sum em
if 153 == 1^3+5^3+3^3--> Its armstrong*/ //use pow() for easy
#include <stdio.h>
#include <math.h>
int main() {
int n; scanf("%d",&n); int c=0,sum=0,copy=n;
while(copy>0){
    copy/=10; c++;}
copy =n; //reset
while(copy>0){
    int rem=copy%10;
    sum=sum+pow(rem,c);
    copy/=10;
}(sum==n)?printf("yes its armstrong"):printf("No");

    return 0;
}