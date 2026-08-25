#include <stdio.h>

int mahasiswa() {
        printf("===== DATA AKADEMIK MAHASISWA ======\n");
        
        int tinggiBadanMahasiswa = 161;
        int beratBadanMahasiswa = 57;
        float ipkMahasiswa = 3.98;
        char gradeMahasiswa = 'A';

        printf("Tinggi badan Mahasiswa => %d\n",tinggiBadanMahasiswa);
        printf("Berat badan Mahasiswa => %d\n",beratBadanMahasiswa);
        printf("Rata-Rata IPK Mahasiswa => %f\n",ipkMahasiswa);
        printf("Grade Mahasiswa ====> %c\n",gradeMahasiswa);

        printf("===10:45===25/08/2026==========UNIVERSITAS=====\n");
        return 0;
    }

int programMenghitungSegitiga () {
    printf("\n\n=====PROGRAM MENGHITUNG SEGITIGA=====\n\n");

    int alas = 30;
    int tinggi = 15;

    int hitung = alas * tinggi / 2;

    printf("\nHasilnya adalah =====> %d\n", hitung);
    return 0;
}
int main () {
    int angka = 137;
    printf("%d\n",angka);

    // TIPE VARIABEL
    int angka1 = 23456;
    float desimal = 2.334;
    char charr = 'L';
    
    // Kita cetak
    printf("Isi Variabel angka => %d \n",angka1); // %d,f,c ini namanya SPESIFICIER
    printf("Isi Variabel desimal => %f \n",desimal);
    printf("Isi Variabel Char => %c \n",charr);
    printf("Isi ketika Variabel ===> %d %f %c \n", angka1, desimal, charr);
    printf("Ini tanpa Variabel %d %f %c \n", 300, 3.4, 'A');

    int isi1 = 20;
    isi1 = 200;
    printf("%d \n",isi1);

    int num1 = 35;
    int num2 = 40;
    num2 = num1;

    printf("%d", num2);

    int x = 10;
    int y = 34;
    int hasil = x + y;

    printf("Hasil dari 10 + 34 adalah => %d \n",hasil);

    int a = 10;
    a = a + 10;

    printf("%d \n",a);

    // MULTIPLE VARIABEL

    int bil = 10, bil1 = 20, bil2 = 30, bil3 = 40;
    printf("Keseluruhan Bil adalah => %d \n",bil+bil1+bil2+bil3);

    int aa, ab, ac, ad;
    aa = ab = ac = ad = 1000;
    printf("%d \n\n\n",aa+ab+ac+ad);

    int tinggiBandan = 161; //INI SANGAT DIREKOMENDASIKAN
    int tb = 161; //TIDAK DIREKOMENDASIKAN

    mahasiswa();
    programMenghitungSegitiga();

    return 0;
}
