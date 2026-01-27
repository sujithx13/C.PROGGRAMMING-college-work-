#include<stdio.h>
int main()
{
 int n,prev=10,cur,ok=1;
 scanf("%d",&n);
 while(n>0)
 {
  cur=n%10;
  if(cur>prev)
  {
   ok=0;
   break;
  }
  prev=cur;
  n=n/10;}
 if(ok)
  printf("Ascending");
 else
  printf("Not Ascending");
 return 0;
}
