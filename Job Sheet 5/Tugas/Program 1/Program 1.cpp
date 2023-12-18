//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
    char operation;
    double num1, num2, result;

    printf("Kalkulator Sederhana\n");
    printf("Pilihan Operasi:\n");
    printf("a) Penjumlahan\n");
    printf("b) Pengurangan\n");
    printf("c) Perkalian\n");
    printf("d) Pembagian\n");
    printf("e) Hasil Bagi\n");
    printf("Pilih operasi (a/b/c/d/e): ");
    scanf(" %c", &operation);

    printf("Masukkan dua bilangan: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operation) {
        case 'a':
            result = num1 + num2;
            printf("Hasil penjumlahan: %.2lf\n", result);
            break;
        case 'b':
            result = num1 - num2;
            printf("Hasil pengurangan: %.2lf\n", result);
            break;
        case 'c':
            result = num1 * num2;
            printf("Hasil perkalian: %.2lf\n", result);
            break;
        case 'd':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Hasil pembagian: %.2lf\n", result);
            } else {
                printf("Kesalahan: Tidak dapat membagi dengan nol.\n");
            }
            break;
        case 'e':
            if (num2 != 0) {
                result = (int)num1 / (int)num2;  // Menggunakan operasi floor pada pembagian
                printf("Hasil bagi: %d\n", (int)result);
            } else {
                printf("Kesalahan: Tidak dapat membagi dengan nol.\n");
            }
            break;
        default:
            printf("Kesalahan: Operasi yang dipilih tidak valid.\n");
            break;
    }

    return 0;
}
