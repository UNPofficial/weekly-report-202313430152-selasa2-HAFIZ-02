//created by_23343067_Hafiz Hafrienda
#include <stdio.h>
int main (){
	char grade;
	
	printf("inputkan grade : ");
	scanf("%c", &grade);
	
	switch (grade){
		case 'A':
			printf("Luar biasa!\n");
			break;
		case 'B':
		case 'C':
			printf("Bagus!\n");
			break;
		case 'D':
			printf("Coba lagi!");
			break;
		case 'E':
		case 'F':
			printf("Silahkan Remedi Ananda!");
			break;
		default:
			printf("Grade Salah!\n");
	}
	
	return 0;
	
}
