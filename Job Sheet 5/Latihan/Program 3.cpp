//created by 23343067_Hafiz Hafrienda
//created by 23343067_Hafiz Hafrienda
#include <stdio.h>
int main(){
	int nilai;
	char grade;
	
	printf("Grade Nilai Mahasiswa UNP\n");
	printf("Inputkan nilai : ");
	scanf("%d", &nilai);
	
	if (nilai >= 90){
		grade = 'A';
	} else if (nilai >= 80){
		grade = 'B';
	} else if (nilai >= 70){
		grade = 'B';
	} else if (nilai >= 60){
		grade = 'C';
	} else if (nilai >= 50){
		grade = 'C';
	} else if (nilai >= 40){
		grade = 'D';
	} else if (nilai >= 30){
		grade = 'D';
	} else {
		grade = 'F';
	}		
	printf("Nilai : %d\n", nilai);
	printf("Grade anda : %c\n", grade);
	
	return 0;
}