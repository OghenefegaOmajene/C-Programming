#include <stdio.h>
int main(){
	int a, b, avg;
	printf("Enter the first variable: ");
	scanf("%d", &a);
	printf("\nEnter the second variable: ");
	scanf("%d", &b);
	
//	avg = (a+b)/2;
//	printf("\nThe average of %d and %d is equal to %d", a,b,avg);
	avg = (a%b);
	printf("The remainder of %d when divided by %d = %d", a,b,avg);
	return 0;
}
