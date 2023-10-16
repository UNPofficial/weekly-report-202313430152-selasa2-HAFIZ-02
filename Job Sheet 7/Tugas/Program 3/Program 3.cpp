#include <stdio.h>
#include <string.h>

int main() {
    char username[] = "Hafrienda";  // Ganti dengan username yang benar
    char password[] = "Hafiz3456";  // Ganti dengan password yang benar
    char input_username[50];
    char input_password[50];

    printf("Selamat datang di halaman login\n");
    printf("Username: ");
    scanf("%s", input_username);
    printf("Password: ");
    scanf("%s", input_password);

    if (strcmp(username, input_username) == 0 && strcmp(password, input_password) == 0) {
        printf("Berhasil login!\n");
    } else {
        printf("Password salah!\n");
    }

    return 0;
}
