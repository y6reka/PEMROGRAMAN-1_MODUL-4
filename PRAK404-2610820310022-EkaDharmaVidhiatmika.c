#include <stdio.h>

int main() {
    int pilihan;
    float n1, n2, hasil;
    char nama[] = "Eka Dharma Vidhiatmika";

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator %s\n", nama);
            break;
        } else if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &n1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &n2);

            if (pilihan == 1) {
                hasil = n1 + n2;
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", n1, n2, hasil);
            } else if (pilihan == 2) {
                hasil = n1 - n2;
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", n1, n2, hasil);
            } else if (pilihan == 3) {
                hasil = n1 * n2;
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n", n1, n2, hasil);
            } else if (pilihan == 4) {
                if (n2 != 0) {
                    hasil = n1 / n2;
                    printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n", n1, n2, hasil);
                } else {
                    printf("Tidak dapat melakukan pembagian dengan nol.\n\n");
                }
            }
        } else {
            printf("Input anda salah, silahkan coba lagi\n\n");
        }
    }

    return 0;
}
