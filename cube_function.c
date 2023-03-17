#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num1;
	printf("Enter number to find it's cube\n");
	scanf("%d",&num1);
	printf("Result is %d",cube(num1));
	
	
	
	
	return 0;
}

int cube(int num){
	
	return num*num*num;
	
}
