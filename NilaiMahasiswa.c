#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilai;
    char huruf[5];
    double angka;
    char kemampuan[30];
    printf ("Input nilai mahasiswa:\n");
    scanf ("%d", &nilai);

    if (nilai >= 80 && nilai <= 100){
        strcpy (huruf, "A");
        angka = 4.0;
        strcpy (kemampuan, "Istimewa");
    }
    else if (nilai >= 71 && nilai <= 79){
        strcpy (huruf, "B+");
        angka = 3.5;
        strcpy (kemampuan, "Sangat Baik");
    }
    else if (nilai >= 65 && nilai <= 70){
        strcpy (huruf, "B");
        angka = 3.0;
        strcpy (kemampuan, "Baik");
    }
    else if (nilai >= 60 && nilai <= 64){
        strcpy (huruf, "C+");
        angka = 2.5;
        strcpy (kemampuan, "Cukup Baik");
    }
    else if (nilai >= 55 && nilai <= 59){
        strcpy (huruf, "C");
        angka = 2.0;
        strcpy (kemampuan, "Cukup");
    }
    else if (nilai >= 50 && nilai <= 54){
        strcpy (huruf, "D+");
        angka = 1.5;
        strcpy (kemampuan, "Kurang Cukup");
    }
    else if (nilai >= 40 && nilai <= 49){
        strcpy (huruf, "D");
        angka = 1.0;
        strcpy (kemampuan, "Kurang");
    }
    else if (nilai >= 0 && nilai <= 39){
        strcpy (huruf, "E");
        angka = 0;
        strcpy (kemampuan, "Sangat Kurang");
    }

    if  (nilai > 0 && nilai <=100){
        printf ("Huruf Mutu: %s", huruf);
        printf ("\n");
        printf ("Angka Mutu: %.1f", angka);
        printf ("\n");
        printf ("Gabungan Kemampuan: %s", kemampuan);
    }
    else {
        printf ("Input nilai gagal, tolong cek kembali nilai yang dimasukkan");
    }
    return 0;
    
}
