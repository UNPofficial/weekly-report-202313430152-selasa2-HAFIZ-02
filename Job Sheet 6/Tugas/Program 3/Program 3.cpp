//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
    int rows = 5;
    int current = 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%2d ", current);
            current += i;  // Menambah nilai sesuai dengan nomor baris
        }
        printf("\n");
        current = i + 1;  // Menetapkan kembali nilai awal untuk baris berikutnya
    }

    return 0;
}
