//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>

int multiply(int a, int b) {
    // Kasus dasar: jika salah satu bilangan adalah 0, hasilnya adalah 0
    if (a == 0 || b == 0) {
        return 0;
    }
    // Kasus dasar: jika salah satu bilangan adalah 1, hasilnya adalah bilangan lainnya
    if (a == 1) {
        return b;
    }
    if (b == 1) {
        return a;
    }

    // Rekursi: a x b = a + a x (b - 1)
    return a + multiply(a, b - 1);
}

int main() {
    int num1, num2;
    printf("Masukkan dua bilangan bulat positif: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0 || num2 < 0) {
        printf("Masukkan bilangan bulat positif.\n");
    } else {
        int result = multiply(num1, num2);
        printf("Hasil perkalian %d x %d = %d\n", num1, num2, result);
    }

    return 0;
}