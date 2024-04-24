#include<stdio.h>
int main(){
	int i;
	printf("Enter a number");
	scanf("%d", &i);
	
	if(i=100 && i>=81){
		printf("A");
	}else if(i>=61 && i<81){
		printf("B");
	}else if(i>=41 && i<61){
		printf("C");
	}else if(i>=21 && i<41){
		printf("D");
	}else if(i>=11 && i<21){
		printf("E");
	}else if(i>=0 && i<11){
		printf("F");
	}
}
