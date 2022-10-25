#include<stdio.h>

int count = 0;

int fibo(int n){
    count++;
	if(n == 1) return 1;
	if(n == 2) return 1;
	return fibo(n-1) + fibo(n-2);
}


int main(){
    
	printf("n? : ");
	int n = 0;
	scanf("%d", &n);
	
	int result = fibo(n);
	printf("%d\n", result);
	printf("Count : %d", count);
	
	return 0;
}