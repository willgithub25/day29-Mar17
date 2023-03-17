#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	printf("Enter the number\n");
	scanf("%d",&num1);
	printf("Factorial is %d",factorial(num1));
	
	
	return 0;
}
int factorial(int num){
	if(num==0||num==1)
	return 1;
	else
	return num*factorial(num-1);
	
}
