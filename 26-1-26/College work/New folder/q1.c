#include <stdio.h>
int main() {
int n; scanf("%d",&n);
int fact =1;
if(n<0) { printf("Invalid number"); return 0;}
else if(n==0||n==1) { printf("Factorial is: 1"); return 0;}
else for(int i=1;i<=n;i++) fact*=i; printf("%d",fact);
return 0;
}