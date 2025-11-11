#include <stdio.h>
int main() {
    int candies,people; printf("enter number of candies and people:"); scanf("%d %d",&candies,&people);
    for(int i=1;i<=people;i++)
    printf("Candy for person %d=%d\n",i,candies/people);
}