//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
    int totalDetik, jam, menit, detik;

    // memasukkan total detik percakapan telepon
    printf("Masukkan total detik percakapan telepon: ");
    scanf("%d", &totalDetik);

    // Menghitung jam, menit, dan detik
    jam = totalDetik / 3600;
    totalDetik = totalDetik % 3600; //sisa detik digunakan untuk melakukan pembagian selanjutnya
    menit = totalDetik / 60;
    detik = totalDetik % 60; //maksud % 60 adalah untuk menampilkan sisa detik yang di tampilkan menjadi detik

    // Menampilkan hasil
    printf("Percakapan telepon tersebut berlangsung selama:\n");
    printf("Jam: %d\n", jam);
    printf("Menit: %d\n", menit);
    printf("Detik: %d\n", detik);
    
    // Garis pembatas (opsional)
    printf("______________________________________\n"); 
    printf("Waktu = %02d:%02d:%02d\n", jam, menit, detik);

    return 0;
}
