# Final-Project-Dasprog-Kel-5
Final Project Dasprog Kel 5

Pembagian Tugas
Hanif: Fungsi Verifikasi Rangkaian Listrik  
Wafi: Tampilan menu, fungsi utama int main()  
Omar: Fungsi Utilitas Sistem Digital

Didalam fungsi int main() kita menggunakan fungsi while loop dengan parameter satu yang dimana nilai tersebut bernilai benar sehingga loop tidak akan berhenti sampai diperintahkan untuk berhenti, didalam loop tersebut terdapat switch case yang digunakan untuk memanggil setiap fungsi Verifikasi Rangkaian Listrik dan Utilitas Sistem Digital. Sebulum dipanggi fungsi tersebut, program pertama tama menampilkann tampilan menu utama, kemudian pengguna diminta untuk memasukkan angka yang diinginkan.

Fungsi utilitas sistem digital :  
Fungsi Desimal ke lainnya : Disini kita menginisialisasi sebuah fungsi yang terbagi menjadi 3 kondisi yaitu jika input 0 -> 0, jika input bilangan bulat maka input akan dibagi dengan basisnya yang hasil sisa baginya diurutkan , dan jika input berupa pecahan maka fungsi akan mengambil integer bilangan pecahan yang nantinya akan dicari selisihnya(f) dengan bilangan aslinya. kemudian hasil selisih tersebut dikali basis dan diambil integernya [d], integer [d] tersebut nantinya akan diganakan dalam fungsi putchar(digit[d]) yang diambil sesuai darichar digit[] = "0123456789ABCDEF"; yang telah diinisialisasi secara global program tersebut yang akan menampilkan hasilnya. setelah itu selisih(f) tersebut nantinya akan dikurang dengan d dengan -= sampai selisih(f)=0. perulangan dilimit maksimal 10 kali.  
FUngsi lainnya ke desimal : Disini kita membuat fungsi dengan parameter alamat konstanta angka dan basis dengan cara kerja menghitung panjang / jumlah karakter pada input. Lalu dilakukan sebuah loop dengan batas panjang string. lalu diinisailsasi sebuah karakter yang berasal dari angka ke [i] dari panjang stringnya. Jika input huruf maka otomatis kapital dengan bantuan toupper. lalu dibuat loop dengan batas panjang stringnya itu sendiri yang berisi kondisi jika input(c) 0<=c<=9 maka nilainy c - 0 dan jika input(c) A<=c<=F maka nilainya adalah 10 + (c-A) yang dimana A itu defaultnya bernilai 10. Nanti hasil akhirnya adalah hasil * basis + nilai. nilai tersebut akan direturn ke hasil. 


