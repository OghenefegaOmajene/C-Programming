int main(){
//	multiplication
	int num, i;
	printf("Enter a number");
	scanf("%d", &num);
	
	for(i=10; i>0;  i--){
		printf("%d * %d = %d\n", num, i, num * i);
	}
}
