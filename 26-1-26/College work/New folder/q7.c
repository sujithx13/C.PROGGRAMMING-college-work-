#include<math.h>
#include <stdio.h>
int main() {
int n; scanf("%d",&n); int prime=1;
if(n<=1) printf("Invalid"); else
{for(int i=2;i<= sqrt(n);i++)
if(n%i==0) {prime=0; break;}};
(prime)?printf("yes"):printf("no");
    return 0;
}