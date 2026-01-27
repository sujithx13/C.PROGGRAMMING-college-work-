#include <stdio.h> 
#include<math.h>
int main() {
int a,b; scanf("%d %d",&a,&b);
while(b>0){
    int temp=b;
    b=a%b;
    a=temp;
}printf("GCD is %d",a);
    return 0;
}