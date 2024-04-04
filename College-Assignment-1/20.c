
#include <stdio.h>

int main() {
    float velocity, distance, time;
    printf("Enter the velocity of the car (in km/h): ");
    scanf("%f", &velocity);
    printf("Enter the distance of the path (in km): ");
    scanf("%f", &distance);
    velocity = velocity / 60;
    time = distance / velocity;
    printf("Time taken to travel %.2f km at %.2f km/h is %.2f minutes\n", distance, velocity * 60, time);
    return 0;
}
