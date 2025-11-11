#include <stdio.h>
int main() {
    float time,speed;
    printf("Enter the speed(Km/hr) and time taken(hours):");scanf("%f %f",&speed,&time);

    float dist=speed*time; printf("\nThe distance travlled: %f",dist);
    return 0;
}
