#include <stdio.h>

typedef double D;
typedef long long ll;

int input_menu = 1 <= input_menu <= 9; 
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
    scanf("%d", &input_menu);
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
        V = I * R;
        printf("\n");
        printf("Tegangan (V) : %.2lf Volt\n", V);
    }
    else if (pilih == 2) {
        printf("Masukkan nilai tegangan (V): ");
        scanf("%lf", &V);
        printf("Masukkan nilai hambatan (R): ");
        scanf("%lf", &R);

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

    printf("masukkan nilai arus (I):");
    scanf("%lf", &I);

    P = V * I;
    printf("\n");
    printf("Daya Listrik (P): %.2lf Watt\n", P);
}
void Kalkulator_Resistor_Seri () {  
    int n;
    D R, total = 0;
    
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Jumlah resistor tidak valid.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        printf("Masukkan nilai resistor ke-%d (Ohm): ", i);
        scanf("%lf", &R);
        total += R;
    }
    
    printf("Rtotal = %.2lf Ohm\n", total);
}
void Kalkulator_Resistor_Paralel () {  
    int n;
    D R, total_kebalikan = 0.0, Rtotal;

    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Jumlah resistor tidak valid.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        printf("Masukkan nilai resistor ke-%d (Ohm): ", i);
        scanf("%lf", &R);

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
void Desimal_Ke_Lainnya () {    
     ll desimal;
            printf("Masukkan bilangan desimal: ");
            scanf("%lld", &desimal);

            printf("Biner: ");
            for (int i = 31; i >= 0; i--) {
                putchar((desimal & (1 << i)) ? '1' : '0');
            }
            printf("\n");

            printf("Oktal: %llo\n", desimal);
            
            printf("Heksadesimal: %llX\n", desimal);
}
void Biner_Ke_Desimal () {  
    char biner[33];
            printf("Masukkan bilangan Biner: ");
            scanf("%s", biner);
            ll desimal = 0;
            for (int i = 0; biner[i] != '\0'; i++) {
                desimal = (desimal << 1) + (biner[i] - '0');
            }
            printf("Desimal: %lld\n", desimal);
}
void Oktal_Ke_Desimal () {  
    ll oktal;
            printf("Masukkan bilangan Oktal: ");
            scanf("%llo", &oktal);
            printf("Desimal: %lld\n", oktal);
}
void Heksadesimal_Ke_Desimal () {    
   char heksa[17];
            printf("Masukkan bilangan Heksadesimal: ");
            scanf("%s", heksa);
            ll desimal = 0;
            sscanf(heksa, "%llx", &desimal);
            printf("Desimal: %lld\n", desimal);
}

int main () {
    
    do
    {
        menu();
        switch (*&input_menu)
    {
    case 1:
        Kalkulator_Hukum_Ohm ();
        break;
    case 2:
        Kalkulator_Daya_Listrik ();
        break;  
    case 3:
        Kalkulator_Resistor_Seri ();
        break;
    case 4:
        Kalkulator_Resistor_Paralel ();
        break;    
    case 5:
        Desimal_Ke_Lainnya ();
        break;  
    case 6:
        Biner_Ke_Desimal ();
        break;
    case 7:
        Oktal_Ke_Desimal ();
        break; 
    case 8:
        Heksadesimal_Ke_Desimal ();
        break; 
    case 9:
        printf("Keluar dari program.\n");
        return 0;
        
    default:
        printf("Pilihan tidak valid. Silakan coba lagi.\n");
        break;  
    }
}
     while (getchar() != '\n');
     puts ("Tekan Enter untuk kembali ke menu utama");
     getchar();
     menu();
     
    
    return 0;
}

    
    

