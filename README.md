# Program ATM Sederhana

## Tujuan

Program ini dibuat sebagai proyek akhir untuk mata kuliah Pemrograman Terstruktur. Program ini mensimulasikan mesin ATM sederhana dengan beberapa fitur dasar seperti transfer uang, menabung, penarikan uang, melihat informasi kelompok, dan mengecek saldo.

## Keterangan

Program ATM ini dibuat menggunakan bahasa pemrograman C++. Program ini memungkinkan pengguna untuk melakukan beberapa operasi perbankan dasar setelah memasukkan PIN yang benar. Selain itu, program ini menggunakan API Windows untuk mengatur warna teks.

## Alur Penggunaan Program

1. Pengguna menjalankan program dan memasukkan PIN.
2. Setelah memasukkan PIN yang benar, pengguna akan melihat menu utama dengan pilihan berikut:
    - Transfer Uang
    - Menabung
    - Penarikan
    - Informasi Kelompok
    - Info Saldo
    - Keluar
3. Pengguna dapat memilih salah satu opsi dengan memasukkan nomor yang sesuai:
    - **Transfer Uang**: Pengguna dapat mentransfer sejumlah uang ke rekening tujuan dengan memasukkan nama pemilik rekening, jenis ATM bank, nomor rekening tujuan, jumlah transfer, dan keterangan pembayaran.
    - **Menabung**: Pengguna dapat menambahkan sejumlah uang ke saldo mereka dengan kelipatan Rp50.000.
    - **Penarikan**: Pengguna dapat menarik uang dengan enam pilihan jumlah yang berbeda.
    - **Informasi Kelompok**: Menampilkan informasi anggota kelompok yang membuat program ini.
    - **Info Saldo**: Menampilkan saldo ATM pengguna saat ini.
    - **Keluar**: Keluar dari program.
4. Setelah menyelesaikan transaksi, pengguna dapat kembali ke menu utama atau keluar dari program.

## Struktur Program

- **Variabel Global**: `jumlah` digunakan untuk menyimpan saldo awal, dengan `ptr_jumlah` sebagai pointer global untuk mengakses variabel jumlah.
- **Fungsi-fungsi Utama**:
    - `void tf()`: Fungsi untuk mentransfer uang.
    - `void nabung()`: Fungsi untuk menambah saldo.
    - `void tampil()`: Fungsi untuk menampilkan informasi kelompok.
    - `void saldo()`: Fungsi untuk menampilkan saldo.
    - `void exit_program()`: Fungsi untuk keluar dari program.
    - `void judul()`: Fungsi untuk menampilkan judul program.
    - `void penarikan_uang()`: Fungsi untuk penarikan uang dengan beberapa pilihan jumlah.
    - `void setColor(int color)`: Fungsi untuk mengatur warna teks menggunakan API Windows.

## Cara Menjalankan Program

1. Clone repository ini ke komputer Anda.
2. Buka terminal atau command prompt.
3. Navigasi ke direktori tempat Anda menyimpan file ini.
4. Compile program menggunakan perintah: `g++ -o atm_program atm.cpp -lwinmm`
5. Jalankan program menggunakan perintah: `./atm_program`
6. Ikuti instruksi yang muncul di layar.

## Contoh Kode Program

```cpp
#include <iostream>
#include <windows.h> // Include library Windows.h untuk menggunakan API Windows
#include <string>
#include <stdlib.h>
using namespace std;

// Variabel global
int jumlah = 1000000;

// Deklarasi pointer global untuk mengakses variabel jumlah
int *ptr_jumlah = &jumlah;

// Fungsi untuk mengatur warna teks
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Fungsi transfer uang
void tf() {
    string nama, jenis, ket;
    int norek, transfer;
    cout << endl;
    setColor(10); // Hijau
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "                          -- PT BANK AMIKOM --                    " << endl;
    cout << endl;
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "=--------------------------- TRANSFER UANG -----------------------" << endl;
    cout << endl;
    cout << "Masukkan Nama Pemilik Rekening        : "; cin >> nama;
    cout << "Masukkan Jenis ATM Bank               : "; cin >> jenis;
    cout << "Masukkan No Rekening Tujuan           : "; cin >> norek;
    cout << "Masukkan Jumlah Transfer Uang         : Rp. "; cin >> transfer;
    cout << "Keterangan Pembayaran                 : "; cin.ignore(); getline(cin, ket);  
    cout << endl;
    *ptr_jumlah -= transfer; // Menggunakan pointer untuk mengurangi saldo

    cout << "------------------------------------------------------------------" << endl;
    cout << "======================= Preview Pembayaran Anda ==================" << endl;
    cout << endl;
    cout << "Nama                              : " << nama << endl;
    cout << "Jenis ATM Bank                    : " << jenis << endl;
    cout << "No. Rekening Tujuan               : " << norek << endl;
    cout << "Jumlah Transfer                   : Rp. " << transfer << endl;
    cout << "Keterangan                        : " << ket << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << "Terimakasih! Transaksi anda sedang diproses...." << endl;
    cout << "Sisa saldo anda : Rp. " << *ptr_jumlah << endl;
    cout << endl;
    int cod;
    cout << "Masukkan kode Angka Bebas Untuk Kembali Ke Home = "; cin >> cod;
    system("cls");
}

// Fungsi menabung
void nabung() {
    int uang;
    cout << "==================================================================" << endl;
    setColor(10); // Hijau
    cout << endl;
    cout << "                          -- PT BANK AMIKOM --                    " << endl;
    cout << endl;
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "----------------------------- SETOR TUNAI ------------------------" << endl;
    cout << endl;
    cout << "Nominal Yang Diterima : " << endl;
    cout << "Kelipatan Rp50.000" << endl;
    cout << endl;
    cout << "Masukan Jumlah Uang RP. "; cin >> uang;

    // Menambahkan ke saldo
    *ptr_jumlah += uang;

    cout << endl;
    cout << "Uang Pada ATM Anda Saat Ini RP. " << *ptr_jumlah << endl;
    cout << "==================================================================" << endl;
    cout << endl;

    int cod;
    cout << "Masukan kode Angka Bebas Untuk Kembali Ke Home = "; cin >> cod;
    system("cls");
}

// Prosedur tampil informasi kelompok
void tampil() {
    cout << endl;
    setColor(10); // Hijau
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "                           -- PT BANK AMIKOM --                   " << endl;
    cout << endl;
    cout << "==================================================================" << endl;
    cout << "--------------------------- INFORMASI KELOMPOK -------------------" << endl;
    cout << endl;
    cout << "|====|=================|=====================|==============|===================|===============|" << endl;
    cout << "| No |   PIN           |     Nama            |    NIM       |   Prodi           |     Saldo     |" << endl;
    cout << "|====|=================|=====================|==============|===================|===============|" << endl;
    cout << "| 1  | 123456          | Rama Danadipa       | 23.12.2956   | Sistem Informasi  |  " << *ptr_jumlah << "   \t|" << endl;
    cout << "|====|=================|=====================|==============|===================|===============|" << endl;
    cout << "| 2  | 123456          | Salman Abdurrahman  | 23.12.2961   | Sistem Informasi  |  " << *ptr_jumlah << "   \t|" << endl;
    cout << "|====|=================|=====================|==============|===================|===============|" << endl;
    cout << "| 3  | 123456          | Wisnu Fadhillah     | 23.12.2952   | Sistem Informasi  |  " << *ptr_jumlah << "   \t|" << endl;
    cout << "|====|=================|=====================|==============|===================|===============|" << endl;
    cout << "| 4  | 123456          | Rizki Maulana       | 23.12.2940   | Sistem Informasi  |  " << *ptr_jumlah << "   \t|" << endl;
    cout << "================================================================================================|" << endl;
    cout << endl;
    int cod;
    cout << "Masukan kode Angka Bebas Untuk Kembali Ke Home = "; cin >> cod;
    system("cls");
}

// Prosedur untuk menampilkan saldo
void saldo() {
    cout << endl;
    setColor(10); // Hijau
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "                         -- PT BANK AMIKOM --                     " << endl;
    cout << endl;
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "---------------------------- SALDO ANDA --------------------------" << endl;
    cout << " TOTAL SALDO : Rp " << *ptr_jumlah << endl; // Menggunakan pointer untuk menampilkan saldo
    cout << endl;
    cout << "============== TERIMA KASIH TELAH MENGGUNAKAN ATM INI ============" << endl;
    cout << endl;
    int cod;
    cout << "Masukkan Kode Angka Bebas untuk kembali ke Home : "; cin >> cod;
    system("cls");
}


// Prosedur untuk keluar
void exit_program() {
    setColor(10); // Hijau
    cout << "==================================================================" << endl;
    cout << "    Terima Kasih Telah Menggunakan Mesin ATM Sederhana Kami...    " << endl;
    cout << "==================================================================" << endl;
}

// Prosedur untuk menampilkan judul
void judul() {
    setColor(10); // Hijau
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "              FINAL PROJECT PEMROGRAMAN TERSTRUKTUR               " << endl;
    cout << endl;
    cout << "                       MESIN ATM SEDERHANA                        " << endl;
    cout << endl;
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "#####################  Welcome to ATM Amikom   ###################" << endl;
    cout << endl;
    cout << "                          Kelompok YTTA                           " << endl;
    cout << endl;
    cout << "                         PIN Anda 123456                          " << endl;
    cout << endl;
    cout << "################ @Amikom/Prodi_Sistem_Informasi/2024 #############" << endl;
    cout << endl;
}

void penarikan_uang() {
    int pilih2;
    int penarikan[6] = {50000, 100000, 200000, 1500000, 300000, 2000000};

    cout << "==================================================================" << endl;
    setColor(10); // Hijau
    cout << endl;
    cout << "                         -- PT BANK AMIKOM --                     " << endl;
    cout << endl;
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "---------------- PILIH JUMLAH PAKET TUNAI PENARIKAN --------------" << endl;
    cout << endl;
    cout << "\t\t1. Rp50.000\t      2. Rp100.000" << endl;
    cout << endl;
    cout << "\t\t3. Rp200.000\t      4. Rp1.500.000" << endl;
    cout << endl;
    cout << "\t\t5. Rp300.000\t      6. Rp2.000.000" << endl;
    cout << endl;
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "Masukan Pilihan : "; cin >> pilih2;
    system("cls");

    if (pilih2 >= 1 && pilih2 <= 6) {
        if (*ptr_jumlah >= penarikan[pilih2 - 1]) {
            *ptr_jumlah -= penarikan[pilih2 - 1];
            cout << "\t\tPenarikan Berhasil" << endl;
            cout << endl;
            cout << endl;
            cout << "Anda Melakukan Penarikan Tunai Sebesar RP." << penarikan[pilih2 - 1] << endl;
            cout << endl;
            cout << "Saldo Anda Saat Ini RP. " << *ptr_jumlah << endl;
        } else {
            cout << endl;
            cout << endl;
            setColor(12); // Merah
            cout << "\t\tMaaf Saldo Anda Tidak Mencukupi" << endl;
            setColor(10); // Kembali ke warna hijau
        }
    } else {
        cout << endl;
        cout << endl;
        setColor(12); // Merah
        cout << "\t\tMaaf Pilihan Anda Tidak Tersedia" << endl;
        setColor(10); // Kembali ke warna hijau
    }

    cout << endl;
    int cod;
    cout << "Masukan Kode Angka Bebas Untuk Kembali Ke Home = "; cin >> cod;
    system("cls");
}

// Fungsi utama
int main() {
    int pin, pilihan;

    judul();
    cout << "Masukan PIN anda : "; cin >> pin;

    while (true) {
        if (pin == 123456) {
            cout << endl;
            cout << endl;
            setColor(10); // Hijau
            cout << "==================================================================" << endl;
            cout << "                       PILIH MENU DI BAWAH INI                    " << endl;
            cout << "------------------------------------------------------------------" << endl;
            cout << "1.) <---  Transfer Uang \t\t Info Data \t---> 4.)" << endl;
            cout << "2.) <---  Menabung \t\t\t Info Saldo \t---> 5.)" << endl;
            cout << "3.) <---  Penarikan \t\t\t Keluar \t---> 6.)" << endl;
            cout << "------------------------------------------------------------------" << endl;
            cout << endl;
            cout << "Masukan Pilihan = "; cin >> pilihan;

            switch (pilihan) {
                case 1:
                    system("cls");
                    tf();
                    break;
                case 2:
                    system("cls");
                    nabung();
                    break;
                case 3:
                    system("cls");
                    penarikan_uang();
                    break;
                case 4:
                    system("cls");
                    tampil();
                    break;
                case 5:
                    system("cls");
                    saldo();
                    break;
                case 6:
                    system("cls");
                    exit_program();
                    return 0;
                default:
                    system("cls");
                    setColor(12); // Merah
                    cout << "Pilihan salah ...... !!" << endl;
                    setColor(10); // Kembali ke warna hijau
                    break;
            }
        } else {
            system("cls");
            cout << endl;
            cout << endl;
            setColor(12); // Merah
            cout << "============================= WARNING ============================" << endl;
            cout << "\t\t  MAAF PIN YANG ANDA MASUKAN SALAH" << endl;
            cout << "\t\tSILAHKAN ULANGI DAN PERIKSA PIN ANDA" << endl;
            cout << "\t\t           TERIMAKASIH" << endl;
            cout << "==================================================================" << endl;
            cout << endl;
            cout << "\t\t\tProgram Selesai ............." << endl;
            setColor(10); // Kembali ke warna hijau
            cout << endl;
            return 0;
        }
    }
}
```
