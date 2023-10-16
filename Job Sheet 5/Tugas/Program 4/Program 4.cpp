//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
    double nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    char hasil_kelulusan;

    // Input nilai-nilai
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%lf", &nilai_kehadiran);
    printf("Masukkan nilai tugas (0-100): ");
    scanf("%lf", &nilai_tugas);
    printf("Masukkan nilai UTS (0-100): ");
    scanf("%lf", &nilai_uts);
    printf("Masukkan nilai UAS (0-100): ");
    scanf("%lf", &nilai_uas);

    // Menghitung nilai akhir
    nilai_akhir = 0.2 * nilai_kehadiran + 0.2 * nilai_tugas + 0.25 * nilai_uts + 0.35 * nilai_uas;

    // Menentukan hasil kelulusan
    if (nilai_akhir >= 0 && nilai_akhir <= 44) {
        hasil_kelulusan = 'E';
    } else if (nilai_akhir >= 45 && nilai_akhir <= 55) {
        hasil_kelulusan = 'D';
    } else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
        hasil_kelulusan = 'C';
    } else if (nilai_akhir >= 66 && nilai_akhir <= 75) {
        hasil_kelulusan = 'B';
    } else if (nilai_akhir >= 76 && nilai_akhir <= 80) {
        hasil_kelulusan = 'B';
    } else if (nilai_akhir >= 81 && nilai_akhir <= 85) {
        hasil_kelulusan = 'B';
    } else if (nilai_akhir >= 86 && nilai_akhir <= 90) {
        hasil_kelulusan = 'A';
    } else if (nilai_akhir >= 91 && nilai_akhir <= 100) {
        hasil_kelulusan = 'A';
    } else {
        printf("Nilai tidak valid. Pastikan nilai antara 0 dan 100.\n");
        return 1;
    }

    // Menampilkan hasil
    printf("Nilai Akhir: %.2lf\n", nilai_akhir);
    switch (hasil_kelulusan) {
        case 'E':
            printf("Maaf, anda tidak lulus!\n");
            break;
        case 'D':
            printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
            break;
        case 'C':
            printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
            break;
        case 'B':
            printf("Selamat! Anda lulus dengan baik!\n");
            break;
        case 'A':
            printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
            break;
    }

    return 0;
}
