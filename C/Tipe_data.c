#include <stdio.h>

int character() {
    char myGrade = 'A';

    printf("Tipe data char => %c\n",myGrade);

    char A = 'A', B = 'B';
    printf("%c\n",A);
    printf("%c\n",B);
    
    //STRING
    char namaKu[] = "Lufyanto";
    printf("Nama Saya %s\n",namaKu);

    
    return 0;
}
int numeric() {

    int angkaInteger = 19854;
    float angkaFloat = 89.98;
    double angkaDouble = 100.433;
    double integer = 33321;
    double hutankIndonesia = 9920.42E10;

    //Rp9.920,42 triliun

    printf("\n\nTipe data Integer => %d\n",angkaInteger);
    printf("Ukuran Memori => %zu \n",sizeof(angkaInteger));

    printf("Tipe data Float => %.2f \n",angkaFloat);
    printf("Ukuran Memori => %zu \n",sizeof(angkaFloat));

    printf("Tipe data Double => %lf\n",angkaDouble);
    printf("Ukuran Memori => %zu \n",sizeof(angkaDouble));

    printf("Tipe data Double => %lf\n",integer);
    printf("Ukuran Memori => %zu \n",sizeof(integer));

    printf("Hutang Indonesia => Rp.%lf\n",hutankIndonesia);
    printf("Ukuran Memori => %zu \n",sizeof(hutankIndonesia));


    return 0;
}
int kopdes() {
    int totalStokKopi = 673;
    float kopiSatuan = 1500;
    double marginUntung = totalStokKopi * kopiSatuan;
    char mataUang[] = "Rp.";

    printf("\n\n========== KOPERASI MERAH PUTIH ==========\n\n");
    printf("Jumlah Stok Kopi Saat ini => %d\n",totalStokKopi);
    printf("Harga satuan Kopi => %s %.2f \n",mataUang,kopiSatuan);
    printf("Margin keuntungan kopi => %s %.3lf \n",mataUang,marginUntung);
    printf("\n========== 25/08/2026 KOPDES CIKARANG ==========\n");

    return 0;
}

int main() {

    character();
    numeric();
    kopdes();
    return 0;
}
