//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
    // Konstanta untuk nilai pi (p)
    const double pi = 3.14159;

    // Diameter bola dalam sentimeter
    double diameter = 12.0;

    // Menghitung jari-jari bola (radius = diameter / 2)
    double radius = diameter / 2.0;

    // Menghitung volume bola (V = 4/3 * p * r^3)
    double volume = (4.0 / 3.0) * pi * radius * radius * radius;

    // Menghitung luas permukaan bola (A = 4 * p * r^2)
    double luas_permukaan = 4.0 * pi * radius * radius;

    // Menampilkan hasil perhitungan
    printf("Diameter bola: %.2lf cm\n", diameter);
    printf("Jari-jari bola: %.2lf cm\n", radius);
    printf("Volume bola: %.2lf cm^3\n", volume);
    printf("Luas permukaan bola: %.2lf cm^2\n", luas_permukaan);

    return 0;
}
