//created by 23343067_Hafiz Hafrienda
#include <stdio.h>
#include <math.h>

int main() {
    char pilihan;
    double luas_permukaan;

    printf("Program Menghitung Luas Permukaan\n");
    printf("Pilihan Rumus Luas Permukaan:\n");
    printf("a) Bola\n");
    printf("b) Kubus\n");
    printf("c) Balok\n");
    printf("d) Tabung\n");
    printf("Masukkan pilihan (a/b/c/d): ");
    scanf(" %c", &pilihan);

    switch (pilihan) {
        case 'a':
        case 'A':
            {
                double jari_jari;
                printf("Masukkan jari-jari bola: ");
                scanf("%lf", &jari_jari);
                luas_permukaan = 4 * M_PI * jari_jari * jari_jari;
                printf("Luas permukaan bola adalah: %.2lf\n", luas_permukaan);
                break;
            }
        case 'b':
        case 'B':
            {
                double sisi;
                printf("Masukkan panjang sisi kubus: ");
                scanf("%lf", &sisi);
                luas_permukaan = 6 * sisi * sisi;
                printf("Luas permukaan kubus adalah: %.2lf\n", luas_permukaan);
                break;
            }
        case 'c':
        case 'C':
            {
                double panjang, lebar, tinggi;
                printf("Masukkan panjang, lebar, dan tinggi balok (pisahkan dengan spasi): ");
                scanf("%lf %lf %lf", &panjang, &lebar, &tinggi);
                luas_permukaan = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
                printf("Luas permukaan balok adalah: %.2lf\n", luas_permukaan);
                break;
            }
        case 'd':
        case 'D':
            {
                double jari_jari_tabung, tinggi_tabung;
                printf("Masukkan jari-jari dan tinggi tabung (pisahkan dengan spasi): ");
                scanf("%lf %lf", &jari_jari_tabung, &tinggi_tabung);
                luas_permukaan = 2 * M_PI * jari_jari_tabung * (jari_jari_tabung + tinggi_tabung);
                printf("Luas permukaan tabung adalah: %.2lf\n", luas_permukaan);
                break;
            }
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
