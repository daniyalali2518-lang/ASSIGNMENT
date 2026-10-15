#include<stdio.h>

int main() {
	
    int num1,num2,result,finalresult;
    
    printf("Name:Daniyal Ali\tRoll No: 26P-3014\n");

    printf("Enter first positive integers:");
    scanf("%d",&num1);
	
	printf("Enter second positive integers:");
    scanf("%d",&num2);


    result=num1&num2;

    finalresult=result>>2;

    printf("Result after & and division by 4:%d \n",result);
}
