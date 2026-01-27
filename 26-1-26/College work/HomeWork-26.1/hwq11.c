#include<stdio.h>
int main()
{
 int n,even=0,odd=0;
 scanf("%d",&n);
 while(n>0)
 {
  if((n%10)%2==0)
   even=1;
  else
   odd=1;
  n=n/10;
 }
 if(even && odd)
  printf("Mixed");
 else if(even)
  printf("All Even");
 else
  printf("All Odd");
 return 0;
}
