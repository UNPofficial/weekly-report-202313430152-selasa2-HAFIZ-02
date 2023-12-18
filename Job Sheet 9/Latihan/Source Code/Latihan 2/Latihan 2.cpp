//Created by 23343067_hafiz Hafrienda
#include <stdio.h>

void add_score(int *score){
	*score = *score + 5;
	printf("Score telah diubah menjadi %d\n", *score);
}

int main(){
	int score = 0;
	
	printf("Score sebelum diubah: %d\n", score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	add_score(&score);
	printf("score setelah nya: %d\n", score);
}