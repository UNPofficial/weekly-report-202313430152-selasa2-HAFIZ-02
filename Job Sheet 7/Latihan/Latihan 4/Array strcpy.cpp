//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>
#include <cstring>
int main(){
	
	char title[] = "Belajar String.h";
	char title_copy[20];
	
	strcpy(title_copy, title);
	
	printf("isi title_copy\t: %s\n", title_copy);
	
}