#include<stdio.h>
int main()
{
 int n,rev=0,d;
 scanf("%d",&n);
 while(n>0)
 {
  rev=rev*10+n%10;
  n=n/10;
 }
 while(rev>0)
 {
  d=rev%10;
  if(d==0) printf("Zero ");
  if(d==1) printf("One ");
  if(d==2) printf("Two ");
  if(d==3) printf("Three ");
  if(d==4) printf("Four ");
  if(d==5) printf("Five ");
  if(d==6) printf("Six ");
  if(d==7) printf("Seven ");
  if(d==8) printf("Eight ");
  if(d==9) printf("Nine ");
  rev=rev/10;
 }
 return 0;
}
