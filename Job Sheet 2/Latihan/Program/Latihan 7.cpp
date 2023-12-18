//created by 23343067_hafiz hafrienda
#include <stdio.h>

int main(){
	char name[50], email[30];
	
	printf("nama: ");
	fgets(name, sizeof(name), stdin);
	
	printf("email: ");
	fgets(email, sizeof(email), stdin);
	
	printf("\n------------------------------\n");
	printf("nama  yang diinputkan: %s\n", name);
	printf("alaamt web yang diinputkan: %s\n", email);


	return 0;
}