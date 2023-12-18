//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>
#include <string.h>

int main(){
	char text[] = "BORLAND";
	char *ptr = text;
	int length = strlen(text);
	int i,j;
	
	for (i = length - 1;i >= 0; i--){
		for (j = i;j < length; j++){
			printf("%c",*(ptr + j));
		}
		printf("\n");
		
		if (strncmp(ptr + i,"BORLAND", 7)==0){
			break;
		}
	}
	
	return 0;
}