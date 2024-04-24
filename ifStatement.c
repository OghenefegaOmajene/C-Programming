#include <stdio.h>

int main(){
	int a;
	printf("Please enter a number");
	scanf("%d", &a);
	
	if(a >= 100 && a < 500){
		printf("Welcome to shege");
	}
	else{
		printf("try again");
	}
}
