#include<stdio.h>
//int calculateSquare(int number){
//	int square = number * number;
//	printf("the square of %d is %d\n", number, square);
//	
//	return 0;
//}
//int main(){
//	calculateSquare(7);
//	calculateSquare(24);
//	
//}


//int addNumbers(int a, int b); //function prototype
//int main(){
//	int num1, num2, sum;
//	printf("please enter two numbers");
//	scanf("%d\t %d", &num1, &num2);
//	
//	sum = addNumbers(num1, num2); //function passed to a variable
//	printf("sum = %d\n", sum);
//	
//	return 0;
//}
//
//int addNumbers(int a, int b){
//	int result;
//	result = a + b;
//	return result;
//}

//void checkPrimeNumber();
//int main(){
//	checkPrimeNumber();  //argument is not passed
//	return 0;
//}
//
//void checkPrimeNumber(){
//	int n, i, flag = 0;
//	
//	printf("Enter a positive integer: ");
//	scanf("%d", &n);
//	
//	if(n == 0 || n== 1)
//	flag = 1;
//	
//	for(i = 2; i<= n/2; ++i){
//		if(n%i == 0){
//			flag = 1;
//			break;
//		}
//	}
//	
//	if(flag == 1)
//		printf("%d is not a prime number");
//	else
//		printf("%d is a prime number");
//}

int main(){
	int number, result;
	
	printf("Enter a number");
	scanf("%d", &number);
	
	result = sum(number);
	
	printf("sum = %d\n", result);
	return 0;
}
int sum(int number){
	if(number != 0){
		//sum() function call itself
		return number + sum(number-1);
	}else{
		return 0;
	}
}

