//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
    double celsius, kelvin, fahrenheit, reamur;

    // Meminta pengguna memasukkan suhu dalam Celsius
    printf("Masukkan suhu dalam Celsius: ");
    scanf("%lf", &celsius);

    // Menghitung suhu dalam Kelvin, Fahrenheit, dan Reamur
    kelvin = celsius + 273.15;
    fahrenheit = (celsius * 1.8) + 32;
    reamur = celsius * 0.8;

    // Menampilkan hasil konversi
    printf("Input Suhu (Celcius)     = %.2lf\n", celsius);
    printf("Suhu dalam Kelvin        = %.2lf\n", kelvin);
    printf("Suhu dalam Fahrenheit    = %.2lf\n", fahrenheit);
    printf("Suhu dalam Reamur        = %.2lf\n", reamur);

    return 0;
}
