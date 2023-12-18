//created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
	
    double total_pembelian, diskon, cashback;

    printf("Selamat datang di TOSERBA\n");
    printf("Masukkan total pembelian (Rp): ");
    scanf("%lf", &total_pembelian);

    if (total_pembelian <= 75000) {
        diskon = 0.05 * total_pembelian;
    } else if (total_pembelian > 75000 && total_pembelian <= 125000) {
        diskon = 0.15 * total_pembelian;
    } else {
        diskon = 0.25 * total_pembelian;
        cashback = 5000;
    }

    double total_bayar = total_pembelian - diskon + cashback;

    printf("Total Pembelian: Rp. %.2lf\n", total_pembelian);
    printf("Diskon: Rp. %.2lf\n", diskon);
    printf("Cashback: Rp. %.2lf\n", cashback);
    printf("Total Bayar: Rp. %.2lf\n", total_bayar);

    return 0;
}
