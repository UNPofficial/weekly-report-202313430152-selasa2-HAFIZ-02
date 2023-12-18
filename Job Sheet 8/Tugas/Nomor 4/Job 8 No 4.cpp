//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>

// Fungsi untuk menghitung besar potongan berdasarkan total pembelian
double potong(double total_pembelian) {
    double diskon = 0.0;
    
    if (total_pembelian > 1000000 && total_pembelian < 3000000) {
        diskon = total_pembelian * 0.2;
    } else if (total_pembelian >= 3000000) {
        diskon = total_pembelian * 0.35;
    }

    return diskon;
}

int main() {
    double total_pembelian;
    
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%lf", &total_pembelian);
    
    double diskon = potong(total_pembelian);
    double total_harus_dibayarkan = total_pembelian - diskon;
    
    printf("Besar Diskon : %.2lf\n", diskon);
    printf("Besar Yang Harus Dibayarkan : %.2lf\n", total_harus_dibayarkan);
    
    return 0;
}