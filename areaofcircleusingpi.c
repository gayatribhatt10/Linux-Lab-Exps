#include <stdio.h>
#include <math.h>

int main() {
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = M_PI * radius * radius;   // use pi from math.h
    printf("The area is %f\n", area); 
    return 0;
}