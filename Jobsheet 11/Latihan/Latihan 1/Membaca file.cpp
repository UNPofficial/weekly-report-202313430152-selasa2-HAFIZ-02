//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>

int main()
{
	char buff[255];
	FILE *ptr;
	
	if((ptr = fopen("puisi.txt","r")) == NULL){
		printf("Error : File tidak ada");
		
		exit (1);
	}
	
	fgets(buff, 255, fptr);
	
	printf("%s", buff);
	
	fclose(fptr);
}