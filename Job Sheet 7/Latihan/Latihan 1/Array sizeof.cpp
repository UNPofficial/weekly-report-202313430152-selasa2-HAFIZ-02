//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>

int main(){
	int nilai[5] = {33, 22, 11, 44, 21};
	
	int length = sizeof(nilai) / sizeof(*nilai);
	
	printf("Banyaknya isi array nilai : %d\n", length);
}