#include<stdio.h>
#include<math.h>
int main() {

    double a1=5,a2=2,a3=3;
    double b1=-4,b2=9,b3=2;
    double angledegrees=53.0;

    double magA=sqrt(pow(a1,2)+pow(a2,2)+pow(a3,2));
    double magB=sqrt(pow(b1,2)+pow(b2,2)+pow(b3,2));

    double angleradians=angledegrees*(3.143/180.0);

    double dotproduct=magA*magB*cos(angleradians);
    
    printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");

    printf("Magnitude of A: %.4lf\n",magA);
    printf("Magnitude of B: %.4lf\n",magB);
    printf("Calculated Dot Product (A.B): %.4lf\n",dotproduct);
}

