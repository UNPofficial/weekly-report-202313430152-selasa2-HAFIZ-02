#include<stdio.h>

int main(){
	char ulangi = 'y';
	int counter = 0;
	
	do {
		printf("Apakah kamu mau mengulang?\n");
		printf("jawab (y/t):");
		scanf("%c", &ulangi);
		
		counter++;
	} while(ulangi == 'y');
	
	printf("\n\n--------------------\n");
	printf("Perulangan Selesai!\n");
	printf("kamu mengulang sebanyak %i kali ke \n", counter);
	
	return 0;
}