#include <stdio.h>
int main() {
int n; scanf("%d",&n); int pro=1;
while(n>0){
    int rem=n%10;
    pro*=rem; n/=10;
}printf("%d",pro);
    return 0;
}