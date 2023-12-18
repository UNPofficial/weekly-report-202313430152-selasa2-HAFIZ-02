//Created By 23343067_Hafiz Hafrienda
#include <stdio.h>

// Fungsi untuk penjumlahan
double add(double a, double b) {
    return a + b;
}

// Fungsi untuk pengurangan
double subtract(double a, double b) {
    return a - b;
}

// Fungsi untuk perkalian
double multiply(double a, double b) {
    return a * b;
}

// Fungsi untuk pembagian
double divide(double a, double b) {
    if (b == 0) {
        printf("Tidak dapat membagi oleh nol.\n");
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2;
    char num;

    printf("Masukkan dua angka: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Pilih operasi (+, -, *, /): ");
    scanf(" %c", &num);

    switch (num) {
        case '+':
            printf("Hasil penjumlahan: %.2lf\n", add(num1, num2));
            break;
        case '-':
            printf("Hasil pengurangan: %.2lf\n", subtract(num1, num2));
            break;
        case '*':
            printf("Hasil perkalian: %.2lf\n", multiply(num1, num2));
            break;
        case '/':
            printf("Hasil pembagian: %.2lf\n", divide(num1, num2));
            break;
        default:
            printf("Operasi tidak valid.\n");
    }

    return 0;
}