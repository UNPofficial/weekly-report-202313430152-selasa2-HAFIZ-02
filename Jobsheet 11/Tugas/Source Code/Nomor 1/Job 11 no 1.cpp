//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("datamahasiswa.txt", "w");

    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return 1;
    }

    int jumlahMahasiswa;
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);

    for (int i = 1; i <= jumlahMahasiswa; i++) {
        fprintf(file, "Data Mahasiswa ke-%d\n", i);

        char nama[50], nim[15], jurusan[50], prodi[50];

        printf("Masukkan Nama Mahasiswa ke-%d: ", i);
        scanf(" %[^\n]s", nama);
        fprintf(file, "Nama: %s\n", nama);

        printf("Masukkan NIM Mahasiswa ke-%d: ", i);
        scanf(" %[^\n]s", nim);
        fprintf(file, "NIM: %s\n", nim);

        printf("Masukkan Jurusan Mahasiswa ke-%d: ", i);
        scanf(" %[^\n]s", jurusan);
        fprintf(file, "Jurusan: %s\n", jurusan);

        printf("Masukkan Program Studi Mahasiswa ke-%d: ", i);
        scanf(" %[^\n]s", prodi);
        fprintf(file, "Program Studi: %s\n", prodi);

        fprintf(file, "\n");
    }

    fclose(file);

    printf("Data mahasiswa telah disimpan ke dalam file datamahasiswa.txt.\n");

    return 0;
}
