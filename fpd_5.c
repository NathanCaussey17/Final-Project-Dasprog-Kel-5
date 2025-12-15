#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef double D;
typedef long long ll;

char digit[] = "0123456789ABCDEF";
int input_menu;
int input_angka_aman(int *hasil) {
    char buf[64];

    if (!fgets(buf, sizeof(buf), stdin))
        return 0;

    if (sscanf(buf, "%d", hasil) != 1)
        return 0;
    return 1;
}
void menu () {
    puts("================================================\n");
    puts("| TOOLKIT LENGKAP ASISTEN LABORATORIUM ELEKTRO |\n");
    puts("================================================\n");
    puts("| ------ Verifikasi Rangkaian Listrik ------   |\n");
    puts("| 1. Kalkulator Hukum Ohm ( V = I * R)         |\n");
    puts("| 2. Kalkulator Daya Listrik ( P = V * I )     |\n");
    puts("| 3. Kalkulator Resistor Seri                  |\n");
    puts("| 4. Kalkulator Resistor Paralel               |\n");
    puts("|                                              |\n");
    puts("| ------ Utilitas Sistem Digital ------        |\n");
    puts("| 5. Desimal -> Biner / Oktal / Heksadesimal   |\n");
    puts("| 6. Biner -> Desimal                          |\n");
    puts("| 7. Oktal -> Desimal                          |\n");
    puts("| 8. Heksadesimal -> Desimal                   |\n");
    puts("|                                              |\n");
    puts("| 9. Keluar                                    |\n");
    printf("Masukkan Pilihan Anda (1-9) : ");
    if (!input_angka_aman(&input_menu)) {
        input_menu = -1;
    }
}
void Kalkulator_Hukum_Ohm () {
    int pilih;
    D V, I, R;

    puts("Pilih besaran dasar hukum ohm yang ingin dihitung");
    puts("1. Tegangan (V)");
    puts("2. Arus (I)");
    puts("3. Hambatan (R)");
    printf("Pilihan (1-3): ");
    scanf("%d", &pilih);

    if (pilih == 1) {
        printf("Masukkan nilai arus (I): ");
        scanf("%lf", &I);
        printf("Masukkan nilai hambatan (R): ");
        scanf("%lf", &R);
        while (getchar() != '\n');
        V = I * R;
        printf("\n");
        printf("Tegangan (V) : %.2lf Volt\n", V);
    }
    else if (pilih == 2) {
        printf("Masukkan nilai tegangan (V): ");
        scanf("%lf", &V);
        printf("Masukkan nilai hambatan (R): ");
        scanf("%lf", &R);
        while (getchar() != '\n');

        if (R == 0) {
            printf("Error: hambatan (R) tidak boleh 0\n");
            return;
        }

        I = V / R;
        printf("\n");
        printf("Arus (I) : %.2lf Ampere\n", I);
    }
    else if (pilih == 3) {
        printf("Masukkan nilai tegangan (V): ");
        scanf("%lf", &V);
        printf("Masukkan nilai arus (I): ");
        scanf("%lf", &I);
        while (getchar() != '\n');

        if (I == 0) {
            printf("Error: arus (I) tidak boleh 0\n");
            return;
        }

        R = V / I;
        printf("\n");
        printf("Hambatan (I) : %.2lf Ohm\n", R);
    }
    else {
        printf("Pilihan tidak valid\n");
    }
    
}
void Kalkulator_Daya_Listrik () {   
    D P,V,I;

    printf("masukkan nilai tegangan (V):");
    scanf("%lf", &V);
    while (getchar() != '\n');

    printf("masukkan nilai arus (I):");
    scanf("%lf", &I);
    while (getchar() != '\n');

    P = V * I;
    printf("\n");
    printf("Daya Listrik (P): %.2lf Watt\n", P);
}
void Kalkulator_Resistor_Seri () {  
    int n;
    D R, total = 0;
    
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);
    while (getchar() != '\n');

    if (n <= 0) {
        printf("Jumlah resistor tidak valid.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        printf("Masukkan nilai resistor ke-%d (Ohm): ", i);
        scanf("%lf", &R);
        while (getchar() != '\n');
        total += R;
    }
    
    printf("Rtotal = %.2lf Ohm\n", total);
}
void Kalkulator_Resistor_Paralel () {  
    int n;
    D R, total_kebalikan = 0.0, Rtotal;

    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);
    while (getchar() != '\n');

    if (n <= 0) {
        printf("Jumlah resistor tidak valid.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        printf("Masukkan nilai resistor ke-%d (Ohm): ", i);
        scanf("%lf", &R);
        while (getchar() != '\n');

        if (R == 0) {
            printf("Error: Nilai resistor tidak boleh 0 Ohm!\n");
            return;
        }

        total_kebalikan += (1.0 / R);
    }

    if (total_kebalikan == 0) {
        printf("Error perhitungan!\n");
        return;
    }

    Rtotal = 1.0 / total_kebalikan;

    printf("Rtotal = %.2lf Ohm\n", Rtotal);
}
void cetak_integer(long long n, int basis) {
    if (n == 0) return;
    cetak_integer(n / basis, basis);
    putchar(digit[n % basis]);
}

void Desimal_Ke_Lainnya() {
    D x, frac;
    ll n;
    int basis, i;

    printf("Masukkan bilangan desimal: ");
    scanf("%lf", &x);

    n = (long long)x;
    frac = x - n;

    printf("Biner: ");
    if (n == 0) putchar('0');
    else cetak_integer(n, 2);

    if (frac > 0) {
        putchar('.');
        double f = frac;
        for (i = 0; i < 10; i++) {
            f *= 2;
            int d = (int)f;
            putchar(digit[d]);
            f -= d;
            if (f == 0) break;
        }
    }
    putchar('\n');


    printf("Oktal: ");
    if (n == 0) putchar('0');
    else cetak_integer(n, 8);

    if (frac > 0) {
        putchar('.');
        double f = frac;
        for (i = 0; i < 10; i++) {
            f *= 8;
            int d = (int)f;
            putchar(digit[d]);
            f -= d;
            if (f == 0) break;
        }
    }
    putchar('\n');

    printf("Heksadesimal: ");
    if (n == 0) putchar('0');
    else cetak_integer(n, 16);

    if (frac > 0) {
        putchar('.');
        double f = frac;
        for (i = 0; i < 10; i++) {
            f *= 16;
            int d = (int)f;
            putchar(digit[d]);
            f -= d;
            if (f == 0) break;
        }
    }
    putchar('\n');
    getchar();
}
ll konversi_posisional(const char *angka, int basis) {
    ll hasil = 0;
    int panjang = strlen(angka);
    for (int i = 0; i < panjang; i++) {
        char c = toupper(angka[i]); 
        int nilai;

        if (c >= '0' && c <= '9') nilai = c - '0';
        else if (c >= 'A' && c <= 'F') nilai = 10 + (c - 'A');
        else {
            printf("Error: karakter '%c' tidak valid untuk basis %d\n", c, basis);
            return -1;
        }

        if (nilai >= basis) {
            printf("Error: digit '%c' tidak valid untuk basis %d\n", c, basis);
            return -1;
        }

        hasil = hasil * basis + nilai;
    }
    return hasil;
}

void Biner_Ke_Desimal() {
    char biner[65];
    printf("Masukkan bilangan Biner: ");
    scanf("%s", biner);
    ll desimal = konversi_posisional(biner, 2);
    if (desimal != -1) printf("Desimal: %lld\n", desimal);
}

void Oktal_Ke_Desimal() {
    char oktal[23];
    printf("Masukkan bilangan Oktal: ");
    scanf("%s", oktal);
    ll desimal = konversi_posisional(oktal, 8);
    if (desimal != -1) printf("Desimal: %lld\n", desimal);
}

void Heksadesimal_Ke_Desimal() {
    char heksa[17];
    printf("Masukkan bilangan Heksadesimal: ");
    scanf("%s", heksa);
    ll desimal = konversi_posisional(heksa, 16);
    if (desimal != -1) printf("Desimal: %lld\n", desimal);
}

int main(void) {
    while (1) {
        menu();

        switch (input_menu) {
        case 1:
            Kalkulator_Hukum_Ohm();
            break;
        case 2:
            Kalkulator_Daya_Listrik();
            break;
        case 3:
            Kalkulator_Resistor_Seri();
            break;
        case 4:
            Kalkulator_Resistor_Paralel();
            break;
        case 5:
            Desimal_Ke_Lainnya();
            break;
        case 6:
            Biner_Ke_Desimal();
            break;
        case 7:
            Oktal_Ke_Desimal();
            break;
        case 8:
            Heksadesimal_Ke_Desimal();
            break;
        case 9:
            puts("Keluar dari program.");
            return 0;
        default:
            puts("Pilihan tidak valid.");
            break;
        }
        printf("\nTekan Enter untuk kembali ke menu");
        getchar();
    }
}


    
    