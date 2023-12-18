//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>
int main(){
	char name[50];
	//Program menampilkan :
	printf("Hello, siapa Nama Lengakpmu?\n");
	
	//Pengguna menginputkan nama lengkap
	printf("Nama: ");
	fgets(name, sizeof(name), stdin);
	
	//Menampilkan "Selamat datang (nama)".
	printf("\n------------------\n");
	printf("Selamat datang %s\n", &name);

	
	return 0;

}