//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
    int jumlah_mahasiswa;

    printf("Input banyak mahasiswa: ");
    scanf("%d", &jumlah_mahasiswa);

    char nama_mahasiswa[jumlah_mahasiswa][100];  // Array 2D untuk nama mahasiswa

    for (int i = 0; i < jumlah_mahasiswa; i++) {
        printf("Input nama mahasiswa %d: ", i + 1);
        scanf("%s", nama_mahasiswa[i]);
    }

    printf("Nama mahasiswa:\n");

    for (int i = 0; i < jumlah_mahasiswa; i++) {
        printf("Nama mahasiswa ke-%d: %s\n", i + 1, nama_mahasiswa[i]);
    }

    return 0;
}
