//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>
#include <math.h>

// Fungsi untuk menghitung luas lingkaran
double luas(double radius) {
    return M_PI * radius * radius;
}

// Fungsi untuk menghitung keliling lingkaran
double keliling(double radius) {
    return 2 * M_PI * radius;
}

int main() {
    double radius;
    printf("Masukkan jari-jari lingkaran: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Jari-jari lingkaran tidak boleh negatif.\n");
    } else {
        double luas_lingkaran = luas(radius);
        double keliling_lingkaran = keliling(radius);

        printf("Luas lingkaran: %.2lf\n", luas_lingkaran);
        printf("Keliling lingkaran: %.2lf\n", keliling_lingkaran);
    }

    return 0;
}