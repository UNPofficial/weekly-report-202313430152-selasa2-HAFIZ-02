//created by_23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
    int nilai[20];  // Array untuk menyimpan nilai 20 mahasiswa
    int total = 0;

    // Menginput nilai dari 20 mahasiswa
    printf("Masukkan nilai dari 20 mahasiswa:\n");
    for (int i = 0; i < 20; i++) {
        printf("Nilai mahasiswa %d: ", i + 1);
        scanf("%d", &nilai[i]);
        total += nilai[i];  // Menambahkan nilai ke total
    }

    // Menghitung rata-rata
    double rata_rata = (double)total / 20;

    // Menampilkan rata-rata
    printf("Rata-rata nilai mahasiswa adalah: %.2lf\n", rata_rata);

    return 0;
}
