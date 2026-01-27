#include<stdio.h>
int main()
{
 int n,es=0,os=0,d;
 scanf("%d",&n);
 while(n>0)
 {
  d=n%10;
  if(d%2==0)
   es+=d;
  else
   os+=d;
  n=n/10;
 }
 printf("%d",es-os);
 return 0;
}
