#include <stdio.h>

int main() {
    // Deklarasi variabel
    float Nilai_Presensi = 85.0;
    float Nilai_Praktek = 65.0;
    float Nilai_UTS = 80.0;
    float Nilai_UAS = 75.0;
    float Nilai_Akhir;

    // Menghitung nilai akhir
    Nilai_Akhir = (Nilai_Presensi * 0.10) + (Nilai_Praktek * 0.20) + (Nilai_UTS * 0.30) + (Nilai_UAS * 0.40);

    // Menampilkan nilai akhir
    printf("Diperoleh Nilai Akhir: %.2f\n", Nilai_Akhir);

    return 0;
}
