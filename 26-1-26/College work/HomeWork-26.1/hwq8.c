#include<stdio.h>
int main()
{
 int n,f[10]={0};
 scanf("%d",&n);
 while(n>0)
 {
  f[n%10]++;
  n=n/10;
 }
 for(int i=0;i<10;i++)
  if(f[i]>0)
   printf("%d : %d\n",i,f[i]);
 return 0;
}
