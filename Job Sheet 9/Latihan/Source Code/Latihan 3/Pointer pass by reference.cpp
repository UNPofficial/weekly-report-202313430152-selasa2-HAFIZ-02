//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>

void add_score(int score){
	score = score + 5;
}

int main (){
	int score = 0;
	
	printf("Score sebelum diubah : %d\n", score);
	
	add_score(score);
	printf("Score setelah diubah : %d\n", score);
}