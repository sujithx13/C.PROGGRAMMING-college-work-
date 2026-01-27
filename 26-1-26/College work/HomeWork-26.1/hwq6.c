#include<stdio.h>
int main()
{
 int n,prev=-1,cur,ok=1;
 scanf("%d",&n);
 while(n>0)
 {
  cur=n%10;
  if(prev!=-1 && cur<prev)
  {
   ok=0;
   break;
  }
  prev=cur;
  n=n/10;
 }
 if(ok)
  printf("Descending");
 else
  printf("Not Descending");
 return 0;
}
