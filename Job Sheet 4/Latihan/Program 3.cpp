#include <stdio.h>

int main() {
	int a = 5;
	int b = 10;
	
	
	b += a;
	printf("hasil b += a adalah %d\n", b);
	
	b -= a;
	printf("Hasil b-= a adalah %d\n", b);
	
	b *= a;
	printf("hasil b *= a adalah %d\n", b);
	
	b /= a;
	printf("hasil b /= a adalah %d\n", b);
	
	b %= a;
	printf("hasil b %= a adalah %d\n", b);
	
	return 0;
}