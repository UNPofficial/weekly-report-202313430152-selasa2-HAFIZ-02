//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>
#include <cstring>
int main(){
	
	char nama[] = "Agariadne D. S.";
	char gelar[] = ", S.Kom, M.Pd.T.";
	
	strcat(nama, gelar);
	
	printf("Nama Lengkap\t: %s\n", nama);
}