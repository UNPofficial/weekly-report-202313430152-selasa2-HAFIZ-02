//created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main (){
	char password[30];
	
	printf("Log in aktivasi belajar\n");
	printf("Masukkan Password anda : ");
	scanf("%s", &password);
	
	if( strcmp(password, "KEJU") == 0){
		printf("Selamat datang anak muda\n");
	} else {
		printf("Password anda salah, coba lagi!\n");
	}
	
	printf("Silahkan nikmati dunia IDE C");
	
	return 0;
}