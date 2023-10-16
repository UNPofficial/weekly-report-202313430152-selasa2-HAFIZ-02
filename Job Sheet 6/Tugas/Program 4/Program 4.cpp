//created by 23343067_Hafiz Hafrienda
#include <stdio.h>

int main() {
    char nama_akun[] = "Hafrienda";
    int no_rek = 123;
    int saldo = 175000;
    int menu;
    int jumlah;

    while (1) {
        printf("Rekening a/n %s\n", nama_akun);
        printf("No Rek  : %d\n", no_rek);
        printf("Saldo ATM: Rp. %d\n", saldo);
        printf("Menu:\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu (1/2/3/4): ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Saldo Anda saat ini: Rp. %d\n", saldo);
                break;
            case 2:
                printf("Masukkan jumlah setoran: Rp. ");
                scanf("%d", &jumlah);
                saldo += jumlah;
                printf("Setoran berhasil. Saldo Anda saat ini: Rp. %d\n", saldo);
                break;
            case 3:
                printf("Masukkan jumlah penarikan: Rp. ");
                scanf("%d", &jumlah);
                if (saldo - jumlah < 50000) {
                    printf("Penarikan gagal. Saldo tidak mencukupi.\n");
                } else {
                    saldo -= jumlah;
                    printf("Penarikan berhasil. Saldo Anda saat ini: Rp. %d\n", saldo);
                }
                break;
            case 4:
                printf("Terima kasih. Selamat tinggal!\n");
                return 0;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }

    return 0;
}
