# Final-Project-Dasprog-Kel-5

Final Project Dasar Pemrograman Kelompok 5

Program ini merupakan *toolkit* lengkap asisten laboratorium elektro, yang mencakup verifikasi rangkaian listrik serta utilitas sistem digital.

---

## Pembagian Tugas
1. **Hanif** : Fungsi Verifikasi Rangkaian Listrik  
2. **Wafi**  : Tampilan menu, fungsi utama 'int main()'  
3. **Omar**  : Fungsi Utilitas Sistem Digital

## Fitur Program
Didalam fungsi int main() kita menggunakan fungsi while loop dengan parameter satu yang dimana nilai tersebut bernilai benar sehingga loop tidak akan berhenti sampai diperintahkan untuk berhenti, didalam loop tersebut terdapat switch case yang digunakan untuk memanggil setiap fungsi Verifikasi Rangkaian Listrik dan Utilitas Sistem Digital. Sebulum dipanggi fungsi tersebut, program pertama tama menampilkann tampilan menu utama, kemudian pengguna diminta untuk memasukkan angka yang diinginkan.

### Fungsi Verifikasi Rangkaian Listrik :
Fungsi ini terdiri dari beberapa kalkulator dasar untuk melakukan perhitungan pada rangkaian listrik. Fungsi Kalkulator_Hukum_Ohm() digunakan untuk menghitung salah satu besaran Hukum Ohm, yaitu tegangan (V), arus (I), atau hambatan (R). Di dalam fungsi ini digunakan variabel bertipe double (V, I, R) dan variabel int pilih untuk menentukan pilihan pengguna. Program membaca pilihan menggunakan scanf, lalu melakukan perhitungan sesuai pilihan dengan rumus Hukum Ohm. Terdapat validasi untuk mencegah pembagian dengan nol saat menghitung arus atau hambatan. Hasil perhitungan ditampilkan dengan format dua angka di belakang koma. Lalu yang kedua ada fungsi Kalkulator_Daya_Listrik() untuk menghitung daya listrik dengan membaca nilai tegangan (V) dan arus (I) bertipe double, kemudian menghitung daya menggunakan operasi P = V * I. Hasil daya ditampilkan dalam satuan Watt dengan dua angka desimal, dan buffer input dibersihkan menggunakan getchar(). Kemudian ada fungsi Kalkulator_Resistor_Seri() yang digunakan untuk menghitung hambatan total rangkaian seri. Fungsi ini membaca jumlah resistor (n), lalu menjumlahkan setiap nilai resistor (R) ke dalam variabel total menggunakan perulangan for. Hambatan total ditampilkan dalam satuan Ohm setelah seluruh nilai resistor diproses. Terakhir fungsi Kalkulator_Resistor_Paralel() digunakan untuk menghitung hambatan total rangkaian paralel. Setiap nilai resistor dibaca dan dihitung kebalikannya menggunakan 1.0 / R, lalu dijumlahkan ke dalam variabel total_kebalikan. Fungsi ini melakukan validasi agar nilai resistor tidak bernilai nol. Hambatan total dihitung dengan 1.0 / total_kebalikan dan ditampilkan dalam satuan Ohm dengan dua angka di belakang koma.

### Fungsi utilitas sistem digital :  
Fungsi Desimal ke lainnya : Disini kita menginisialisasi sebuah fungsi yang terbagi menjadi 3 kondisi yaitu jika input 0 -> 0, jika input bilangan bulat maka input akan dibagi dengan basisnya yang hasil sisa baginya diurutkan , dan jika input berupa pecahan maka fungsi akan mengambil integer bilangan pecahan yang nantinya akan dicari selisihnya(f) dengan bilangan aslinya. kemudian hasil selisih tersebut dikali basis dan diambil integernya [d], integer [d] tersebut nantinya akan diganakan dalam fungsi putchar(digit[d]) yang diambil sesuai darichar digit[] = "0123456789ABCDEF"; yang telah diinisialisasi secara global program tersebut yang akan menampilkan hasilnya. setelah itu selisih(f) tersebut nantinya akan dikurang dengan d dengan -= sampai selisih(f)=0. perulangan dilimit maksimal 10 kali.  
FUngsi lainnya ke desimal : Disini kita membuat fungsi dengan parameter alamat konstanta angka dan basis dengan cara kerja menghitung panjang / jumlah karakter pada input. Lalu dilakukan sebuah loop dengan batas panjang string. lalu diinisailsasi sebuah karakter yang berasal dari angka ke [i] dari panjang stringnya. Jika input huruf maka otomatis kapital dengan bantuan toupper. lalu dibuat loop dengan batas panjang stringnya itu sendiri yang berisi kondisi jika input(c) 0<=c<=9 maka nilainy c - 0 dan jika input(c) A<=c<=F maka nilainya adalah 10 + (c-A) yang dimana A itu defaultnya bernilai 10. Nanti hasil akhirnya adalah hasil * basis + nilai. nilai tersebut akan direturn ke hasil. 

# **OPSI 1 Kalkulator** :  
<img width="1440" height="844" alt="Pilihan 1" src="https://github.com/user-attachments/assets/7ab4dce8-aacd-4d03-8523-c5af5d25a8d6" />  
# **Opsi 2 Kalkulator** :  
<img width="1440" height="844" alt="Pilihan 2" src="https://github.com/user-attachments/assets/3219632c-db27-4221-943d-b4edfa12db76" />  
# **Opsi 3 Kalkulator** :  
<img width="1440" height="844" alt="Pilihan 3" src="https://github.com/user-attachments/assets/d49806d0-4f69-41a8-acd5-ce07e830354c" />  
# **Opsi 4 Kalkulator** :  
<img width="1440" height="844" alt="Pilihan 4" src="https://github.com/user-attachments/assets/3e399718-ce3e-4475-9f3b-dd6ba4eb80ef" />  
# **Opsi 5 Kalkulator** :  
<img width="1440" height="844" alt="Pilihan 5" src="https://github.com/user-attachments/assets/fb6aeb67-02bc-4df0-91b5-b71b80aa65cb" />    
# **Opsi 6 Kalkulator** :  
<img width="1440" height="844" alt="Pilihan 6" src="https://github.com/user-attachments/assets/ee196fe6-35dd-4edd-9ba4-504e5a8a7dd7" />    
# **Opsi 7 Kalkulator** :  
<img width="1440" height="844" alt="Pilihan 7" src="https://github.com/user-attachments/assets/af9f4f34-a473-44e4-a5ac-fb652f073cd4" />    
# **Opsi 8 Kalkulator** :  
<img width="1440" height="844" alt="Pilihan 8" src="https://github.com/user-attachments/assets/f56465cd-02bc-4c29-9f31-4e9a9b9042e9" />    
# **Opsi 9 Kalkulator** :  
<img width="1440" height="844" alt="Pilihan 9" src="https://github.com/user-attachments/assets/7adc26ac-501f-40d8-bac3-d3a960e2424f" />    








