//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char playAgain;
    srand(time(NULL));

    do {
        //Nomor acak antara 1 dan 20
        int computerNumber = rand() % 20 + 1;
        int userGuess, attempts = 0;

        printf("Hai! Saya telah memilih nomor antara 1 dan 20. Coba tebak ya!\n");

        do {
            printf("Masukkan tebakan Anda : ");
            scanf("%d", &userGuess);
            attempts++;

            if (userGuess < computerNumber) {
                printf("Nomor saya lebih besar!\n");
            } else if (userGuess > computerNumber) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, Anda benar! Anda membutuhkan %d percobaan.\n", attempts);
            }

        } while (userGuess != computerNumber);

        printf("Ingin bermain lagi? (y/n) : ");
        scanf(" %c", &playAgain); //Spasi sebelum %c untuk menghindari kelebihan karakter newline

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Terima kasih telah bermain! Sampai jumpa.\n");

    return 0;
}
