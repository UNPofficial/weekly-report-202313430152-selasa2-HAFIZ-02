//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>

// Definisikan struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    int npm;
    char nama[50];
    char tanggalLahir[10];
    char alamat[100];
    long long hp;
};

int main() {
    struct Mahasiswa mahasiswa[50]; // Maksimum 50 mahasiswa
    int jumlahMahasiswa = 0;
    char tambahData;

    do {
        // Meminta pengguna memasukkan data mahasiswa
        printf("NPM : ");
        scanf("%d", &mahasiswa[jumlahMahasiswa].npm);

        printf("NAMA : ");
        scanf(" %49[^\n]", mahasiswa[jumlahMahasiswa].nama);

        printf("TGL LAHIR : ");
        scanf("%9s", mahasiswa[jumlahMahasiswa].tanggalLahir);

        printf("ALAMAT : ");
        scanf(" %99[^\n]", mahasiswa[jumlahMahasiswa].alamat);

        printf("HP : ");
        scanf("%lld", &mahasiswa[jumlahMahasiswa].hp);

        jumlahMahasiswa++;

        // Meminta pengguna apakah ingin memasukkan data lagi
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &tambahData);

    } while (tambahData == 'y' || tambahData == 'Y');

    // Menampilkan data mahasiswa
    printf("\nData Mahasiswa :\n");
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        printf("%d %s %s %s %lld\n",
               mahasiswa[i].npm, mahasiswa[i].nama, mahasiswa[i].tanggalLahir, mahasiswa[i].alamat, mahasiswa[i].hp);
    }

    return 0;
}
