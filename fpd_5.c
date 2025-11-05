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
    
}
void Kalkulator_Daya_Listrik () {   
    
}
void Kalkulator_Resistor_Seri () {  
    
}
void Kalkulator_Resistor_Paralel () {  
    
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

        break;

    case 2:
        
        break;  

    case 3:

        break;

    case 4:

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

    
    

