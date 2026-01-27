#include <stdio.h> 
#include <math.h> 
int main() { 
    int n, sq; scanf("%d",&n); 
    sq=n*n; 
    int digits=log10(n)+1; 
    int last = sq % (int)pow(10,digits); 
    if(last==n) printf("Automorphic Number"); 
    else printf("Not Automorphic Number"); return 0; }