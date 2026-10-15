#include <stdio.h>

int main() {
	
    int a,b;
    
    printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");

    printf("Enter 1st integers:");
    scanf("%d",&a);

	printf("Enter 2nd integers:");
    scanf("%d",&b);

    printf("Before swapping: a = %d, b = %d\n",a,b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("After swapping: a=%d,b=%d\n", a,b);
}
