#include<stdio.h>
#include<math.h>
int main()
{
 int n,t,first,last,c=0;
 scanf("%d",&n);
 last=n%10;
 t=n;
 while(t>=10)
 {
  t=t/10;
  c++;
 }
 first=t;
 int mid=n%(int)pow(10,c);
 mid=mid/10;
 int res= last*pow(10,c) + mid*10 + first;
 printf("%d",res);
 return 0;
}
