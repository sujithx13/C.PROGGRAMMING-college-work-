#include <stdio.h>
int main() {
    int cphr,time;
    printf("Enter the cakes made in an hour and desired time to be known:");
    scanf("%d %d",&cphr,&time);
    printf("Cakes made in given time:%d = %d",time,cphr*time);}