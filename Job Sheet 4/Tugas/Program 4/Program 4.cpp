//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
    // Deklarasi variabel
    float tarifPertama = 15000.0; // Tarif 1 jam pertama
    float tarifBerikutnya = tarifPertama * 0.5; // Tarif jam berikutnya (50% dari tarif pertama)
    int durasiJam; // Durasi dalam jam
    float totalPembayaran;
    
    printf("Masukkan total lama menonton = ", durasiJam);
    scanf("%d", &durasiJam);

    // Menghitung total pembayaran
    if (durasiJam <= 0) {
        printf("Durasi harus lebih dari 0 jam.\n");
    } else if (durasiJam == 1) {
        totalPembayaran = tarifPertama;
    } else {
        totalPembayaran = tarifPertama + tarifBerikutnya * (durasiJam - 1);
    }

    // Menampilkan total pembayaran
    printf("Total yang harus dibayar selama %d jam adalah: Rp %.2f\n", durasiJam, totalPembayaran);

    return 0;
}
