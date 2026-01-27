#include <stdio.h>
 int fact(int x)
 {int f=1;
 for(int i=1;i<=x;i++)
 f*=i;return f;} 
 int main() { int n, sum=0, temp; 
 scanf("%d",&n); temp=n; 
 while(temp>0)
 { sum+=fact(temp%10); 
 temp/=10; } 
 if(sum==n) printf("Strong Number"); 
 else printf("Not Strong Number"); return 0; }