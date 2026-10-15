#include <stdio.h>
#include <math.h>

int main() {
	
    float x1, y1, x2, y2;
    float distance;
    
    printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");

    printf("Enter  Point  x1:");
    scanf("%f",&x1);

    printf("Enter Point x2:");
    scanf("%f",&x2);
    
    printf("Enter  Point  y1:");
    scanf("%f",&x1);

    printf("Enter Point y2:");
    scanf("%f",&y2);

    distance=sqrt(pow(x2 - x1,2)+pow(y2-y1,2));

    printf("The distance between the two points is:%f\n",distance);
}
