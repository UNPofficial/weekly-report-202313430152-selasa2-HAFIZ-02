//Created by 23343067_Hafiz Hafrienda

#include <stdio.h>

//Definisikan struktur untuk menyimpan data tgl, bln, dan thn
struct Date {
    int day;
    int month;
    int year;
};

//Definisikan struktur untuk menyimpan data zodiak dan tanggal batas zodiak
struct Zodiac {
    const char* name;
    struct Date startDate;
    struct Date endDate;
};

//Fungsi untuk menentukan zodiak berdasarkan tanggal lahir
const char* getZodiac(struct Date birthDate, struct Zodiac zodiacs[], int numZodiacs) {
    for (int i = 0; i < numZodiacs; ++i) {
        if ((birthDate.month == zodiacs[i].startDate.month && birthDate.day >= zodiacs[i].startDate.day) ||
            (birthDate.month == zodiacs[i].endDate.month && birthDate.day <= zodiacs[i].endDate.day)) {
            return zodiacs[i].name;
        }
    }
    return "Unknown";
}

int main() {
    //Array untuk menyimpan data zodiak
    struct Zodiac zodiacs[] = {
        {"Capricorn", {22, 12, 0}, {19, 1, 0}},
        {"Aquarius", {20, 1, 0}, {18, 2, 0}},
        {"Pisces", {19, 2, 0}, {20, 3, 0}},
        {"Aries", {21, 3, 0}, {19, 4, 0}},
        {"Taurus", {20, 4, 0}, {20, 5, 0}},
        {"Gemini", {21, 5, 0}, {20, 6, 0}},
        {"Cancer", {21, 6, 0}, {22, 7, 0}},
        {"Leo", {23, 7, 0}, {22, 8, 0}},
        {"Virgo", {23, 8, 0}, {22, 9, 0}},
        {"Libra", {23, 9, 0}, {22, 10, 0}},
        {"Scorpio", {23, 10, 0}, {21, 11, 0}},
        {"Sagittarius", {22, 11, 0}, {21, 12, 0}}
    };

    struct Date birthDate;

    //Meminta pengguna memasukkan tanggal lahir
    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &birthDate.day, &birthDate.month, &birthDate.year);

    //Menentukan dan menampilkan zodiak berdasarkan tanggal lahir
    const char* zodiac = getZodiac(birthDate, zodiacs, sizeof(zodiacs) / sizeof(zodiacs[0]));
    printf("Zodiak Anda adalah: %s\n", zodiac);

    return 0;
}
