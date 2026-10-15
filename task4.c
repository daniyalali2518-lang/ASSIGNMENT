#include <stdio.h>

int main() {
	
    int num;
    
    printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");

    printf("Enter an integer:");
    scanf("%d", &num);

    printf("The number is %s.\n",(num&1) ? "Odd":"Even");
}
