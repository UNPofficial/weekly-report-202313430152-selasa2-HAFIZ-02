//created by 23343067_Hafiz Hafrienda (operasi tenary)
#include <stdio.h>

int main(){
	int jawaban;
	
	printf("Berapakah hasil 3+4\n");
	printf("jawab = ");
	scanf("%d", &jawaban);
	
	printf("Jawaban anda: %s\n", (jawaban == 7) ? "benar" : "Salah");
	
	return 0;
}