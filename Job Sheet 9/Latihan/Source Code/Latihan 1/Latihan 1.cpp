//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main(){
	int score = 0;
	int *p_score = &score;
	
	printf("isi %d\n", *p_score);
	
	printf("isi %d\n", score);
	
	*p_score = 5;
	
	printf("isi score diubah = %d\n", score);
}