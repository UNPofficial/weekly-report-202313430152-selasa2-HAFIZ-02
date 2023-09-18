//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
    double uang_rupiah;

    // Nilai tukar Rupiah ke Dollar
    double nilai_tukar = 14250.0;

    // Menampilkan prompt untuk memasukkan jumlah uang dalam Rupiah
    printf("Masukkan jumlah uang dalam Rupiah: ");
    
    // Membaca input dari pengguna
    scanf("%lf", &uang_rupiah);

    // Menghitung jumlah Dollar yang akan diberikan
    double uang_dollar = uang_rupiah / nilai_tukar;

    // Menampilkan hasil konversi
    printf("Jumlah Dollar yang Anda berikan: $%.2lf\n", uang_dollar);

    return 0;
}
