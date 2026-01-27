#include <stdio.h>
int digitSum(int n){
    int sum=0;
    while(n>0){ sum+=n%10; n/=10; }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    while(n>9) n=digitSum(n);
    if(n==1) printf("Magic Number");
    else printf("Not Magic Number");
    return 0;
}