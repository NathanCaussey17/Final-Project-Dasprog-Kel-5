#include <stdio.h>
int main ()
{
	int pilihan;
	
	menu:
	printf("================================================\n");
	printf("| TOOLKIT LENGKAP ASISTEN LABORATORIUM ELEKTRO |\n");
	printf("================================================\n");
	printf("|    --- Verifikasi Rangkaian Elektrik ---     |\n");
	printf("| 1. Kalkulator Hukum Ohm ( V = I * R )        |\n");
	printf("| 2. Kalkulator Daya Listrik ( P = V * I )     |\n");
	printf("| 3. Kalkulator Resistor Seri                  |\n");
	printf("| 4. Kalkulator Resistor Paralel               |\n");
	printf("|                                              |\n");
	printf("|       --- Utilitas Sistem Digital ---        |\n");
	printf("| 5. Desimal -> Biner / Oktal / Heksadesimal   |\n");
	printf("| 6. Biner -> Desimal                          |\n");
	printf("| 7. Oktal -> Desimal                          |\n");
	printf("| 8. Heksadesimal -> Desimal                   |\n");
	printf("|                                              |\n");
	printf("| 9. Keluar                                    |\n");
	printf("------------------------------------------------\n");
	printf("Masukkan pilihan Anda (1 -9) :");
	scanf("%d", &pilihan);
	
	return 0;
	
}