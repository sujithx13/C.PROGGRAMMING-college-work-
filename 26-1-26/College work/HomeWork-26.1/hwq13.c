#include<stdio.h>
int main()
{
 int n,res=0,p=1,d;
 scanf("%d",&n);
 while(n>0)
 {
  d=n%10;
  if(d!=0)
  {
   res+=d*p;
   p=p*10; }
  n=n/10;
 }
 printf("%d",res);
 return 0;
}
