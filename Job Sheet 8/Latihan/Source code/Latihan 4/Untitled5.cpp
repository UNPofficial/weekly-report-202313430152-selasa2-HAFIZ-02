//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>
int sum(int n);

int main(){
	int number, result;
	
	printf("Enter a positif integer:");
	scanf("%d", &number);
	
	result = sum(number);
	
	printf("sum = %d", result);
}

int sum(int num){
	if (num!=0)
		return num + sum(num-1);
	else 
		return num;
}

