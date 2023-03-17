#include <stdio.h>
#include <stdlib.h>

int main(){
	int length,width;
	printf("Enter the length and width\n");
	scanf("%d%d",&length,&width);
	printf("Area is %d",area_of_rectangle(length,width));
	
	
	
	return 0;
}
int area_of_rectangle(int a,int b){
	
	return a*b;
}
