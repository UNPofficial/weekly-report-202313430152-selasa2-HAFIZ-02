//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char input[100];

    printf("Masukkan kalimat : ");
    scanf("%s", input);

    printf("Kebalikannya : ");
    reverseString(input);

    return 0;
}
