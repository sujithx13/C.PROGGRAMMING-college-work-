#include <stdio.h>
int main() {
int n; scanf("%d",&n); int rev=0,back=n;
while(n!=0){
    rev=rev*10;
    rev+=n%10; n/=10;}
    (back==rev)?printf("Yes"):printf("No");
    return 0;
}