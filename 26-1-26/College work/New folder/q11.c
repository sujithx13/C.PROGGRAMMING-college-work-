#include <stdio.h> 
int main() 
{ int n, sum=0; scanf("%d",&n); 
printf("Factors: "); for(int i=1;i<=n;i++)
 { if(n%i==0) { printf("%d ",i); sum+=i; } }
  printf("\nSum of factors: %d",sum);
   return 0; }