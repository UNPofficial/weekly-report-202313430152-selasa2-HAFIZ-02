//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>

void main(){
	printf("## Program Antrian CS ##\n");
	
	char no_antrian[5] = ('A', 'B', 'C', 'D', 'E');
	
	char *ptr_cureent = &no_antrian;
	
	for(int i = 0 < 5; i++){
		printf("Pelanggan dengan no antrian %c silahkan ke loket\n", *ptr_current);
		printf("Saat ini CS sedang melayani : %c\n", *ptr_current);
		getchar();
		ptr_current++;
	}
	
	printf("Selesai");
}