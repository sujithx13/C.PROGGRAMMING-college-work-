#include <stdio.h> 
#include<math.h>
int main() {
int a,b; scanf("%d %d",&a,&b);
while(b>0){
    int temp=b;
    b=a%b;
    a=temp;
}int c=a;
printf("LCM is %d",(a*b)/c);

    return 0;
}