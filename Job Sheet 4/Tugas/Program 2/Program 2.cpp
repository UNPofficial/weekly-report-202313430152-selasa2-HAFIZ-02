//Created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
    // Deklarasi variabel
    char namaPembeli[50];
    char namaBarang[50];
    float hargaBarangSatuan;
    int jumlahBarang;
    float hargaTotal;

    // Meminta input dari pengguna
    printf("Masukkan nama pembeli: ");
    fgets(namaPembeli, sizeof(namaPembeli), stdin);

    printf("Masukkan nama barang: ");
   	scanf("%s", &namaBarang);

    printf("Masukkan harga barang satuan: Rp");
    scanf("%f", &hargaBarangSatuan);

    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlahBarang);

    // Menghitung harga total
    hargaTotal = hargaBarangSatuan * jumlahBarang;

    // Menampilkan hasil
    printf("\n===== Struk Pembelian =====\n");
    printf("Nama Pembeli: %s\n", namaPembeli);
    printf("Nama Barang: %s\n", namaBarang);
    printf("Harga Barang Satuan: Rp%.2f\n", hargaBarangSatuan);
    printf("Jumlah Barang: %d\n", jumlahBarang);
    printf("Harga Total: Rp%.2f\n", hargaTotal);

    return 0;
}
