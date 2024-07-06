#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

// Variabel global
int jumlah = 1000000;

// Fungsi transfer uang
void tf() {
    string nama, jenis, ket;
    int norek, transfer;
    cout << endl;
    cout << "===================TRANSFER UANG====================" << endl;
    cout << endl;
    cout << "Masukkan Nama Pemilik Rekening        : "; cin >> nama;
    cout << "Masukkan Jenis ATM Bank               : "; cin >> jenis;
    cout << "Masukkan No Rekening Tujuan           : "; cin >> norek;
    cout << "Masukkan Jumlah Transfer Uang         : Rp. "; cin >> transfer;
    cout << "Keterangan Pembayaran                 : "; cin.ignore(); getline(cin, ket);  
    cout << endl;
    jumlah -= transfer;

    cout << "-------------------------------------------------------------------" << endl;
    cout << "===================Preview Pembayaran Anda================" << endl;
    cout << endl;
    cout << "Nama                              : " << nama << endl;
    cout << "Jenis ATM Bank                    : " << jenis << endl;
    cout << "No. Rekening Tujuan               : " << norek << endl;
    cout << "Jumlah Transfer                   : Rp. " << transfer << endl;
    cout << "Keterangan                        : " << ket << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "Terimakasih! Transaksi anda sedang diproses...." << endl;
    cout << "Sisa saldo anda : Rp. " << jumlah << endl;
    cout << endl;
    int cod;
    cout << "Masukkan kode Angka Bebas Untuk Kembali Ke Home = "; cin >> cod;
    system("cls");
}

// Fungsi menabung
void nabung() {
    int uang;
    cout << endl;
    cout << "========== SETOR TUNAI ===========" << endl;
    cout << endl;
    cout << "Nominal Yang Diterima : " << endl;
    cout << "Kelipatan Rp50.000" << endl;
    cout << endl;
    cout << "Masukan Jumlah Uang RP. "; cin >> uang;

    // Menambahkan ke saldo
    jumlah += uang;

    cout << endl;
    cout << "Uang Pada ATM Anda Saat Ini RP. " << jumlah << endl;
    cout << "===================================" << endl;
    cout << endl;

    int cod;
    cout << "Masukan kode Angka Bebas Untuk Kembali Ke Home = "; cin >> cod;
    system("cls");
}

// Prosedur tampil informasi kelompok
void tampil() {
    cout << endl;
    cout << "================= INFORMASI KELOMPOK ================" << endl;
    cout << endl;
    cout << "|====|=================|=====================|==============|===================|==================|" << endl;
    cout << "| No |   PIN           |     Nama            |    NIM       |   Prodi           |     Saldo        |" << endl;
    cout << "|====|=================|=====================|==============|===================|==================|" << endl;
    cout << "| 1  | 23122956        | Rama Danadipa       | 23122956     | Sistem Informasi  |" << jumlah << "\t\t|" << endl;
    cout << "|====|=================|=====================|==============|===================|==================|" << endl;
    cout << "| 2  | 23122961        | Salman Abdurrahman  | 23122961     | Sistem Informasi  |" << jumlah << "\t\t|" << endl;
    cout << "|====|=================|=====================|==============|===================|==================|" << endl;
    cout << "| 3  | 23122952        | Wisnu Fadhillah     | 23122952     | Sistem Informasi  |" << jumlah << "\t\t|" << endl;
    cout << "===================================================================================================|" << endl;
    cout << "| 4  | 23122940        | Rizki Maulana       | 23122940     | Sistem Informasi  |" << jumlah << "\t\t|" << endl;
    cout << "===================================================================================================|" << endl;
    cout << endl;
    int cod;
    cout << "Masukan kode Angka Bebas Untuk Kembali Ke Home = "; cin >> cod;
    system("cls");
}

// Prosedur untuk menampilkan saldo
void saldo() {
    cout << endl;
    cout << "================= SALDO ANDA =================" << endl;
    cout << "------------ TOTAL SALDO : Rp " << jumlah << " --------------" << endl;
    cout << endl;
    cout << "== TERIMA KASIH TELAH MENGGUNAKAN ATM INI ==" << endl;
    cout << endl;
    int cod;
    cout << "Masukkan Kode Angka Bebas untuk kembali ke Home : "; cin >> cod;
    system("cls");
}


// Prosedur untuk keluar
void exit_program() {
    cout << "==========================================================" << endl;
    cout << "Terima Kasih Telah Menggunakan Mesin ATM Sederhana Kami..." << endl;
    cout << "==========================================================" << endl;
}

// Prosedur untuk menampilkan judul
void judul() {
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "FINAL PROJECT PEMROGRAMAN TERSTRUKTUR" << endl;
    cout << endl;
    cout << "MESIN ATM SEDERHANA" << endl;
    cout << endl;
    cout << "==================================================================" << endl;
    cout << endl;
    cout << "#################Welcome to ATM Sederhana########################" << endl;
    cout << endl;
    cout << "Kelompok YTTA" << endl;
    cout << endl;
    cout << "PIN Anda 123456" << endl;
    cout << endl;
    cout << "#################@Amikom/Prodi_Sistem_Informasi/2024##############" << endl;
    cout << endl;
}

void penarikan_uang() {
    int pilih2;
    int penarikan[6] = {50000, 100000, 200000, 1500000, 300000, 2000000};

    cout << "===================================" << endl;
    cout << endl;
    cout << "-- PT BANK AMIKOM --" << endl;
    cout << endl;
    cout << "PILIH JUMLAH PAKET TUNAI PENARIKAN" << endl;
    cout << endl;
    cout << "1. Rp50.000\t      2. Rp100.000" << endl;
    cout << endl;
    cout << "3. Rp200.000\t      4. Rp1.500.000" << endl;
    cout << endl;
    cout << "5. Rp300.000\t      6. Rp2.000.000" << endl;
    cout << endl;
    cout << "===================================" << endl;
    cout << endl;
    cout << "Masukan Pilihan : "; cin >> pilih2;
    system("cls");

    if (pilih2 >= 1 && pilih2 <= 6) {
        if (jumlah >= penarikan[pilih2 - 1]) {
            jumlah -= penarikan[pilih2 - 1];
            cout << "\t\tPenarikan Berhasil" << endl;
            cout << endl;
            cout << endl;
            cout << "Anda Melakukan Penarikan Tunai Sebesar RP." << penarikan[pilih2 - 1] << endl;
            cout << "" << endl;
            cout << "Sisa Saldo Anda RP. " << jumlah << endl;
        } else {
            cout << "Saldo Anda Tidak Cukup" << endl;
        }
    } else {
        cout << "Pilihan Yang Anda Masukan Salah" << endl;
    }

    int cod;
    cout << "Masukan kode Angka Bebas Untuk Kembali Ke Home = "; cin >> cod;
    system("cls");
}

int main() {
    int pin, pilihan;

    judul();
    cout << "Masukan PIN anda : "; cin >> pin;

    while (true) {
        if (pin == 123456) {
        	cout << endl;
            cout << endl;
            cout << "======================================================" << endl;
            cout << "PILIH MENU DI BAWAH INI" << endl;
            cout << "---------------------------------------------------------------------------------------------" << endl;
            cout << "1.) <---  Transfer Uang \t\t Info Data \t---> 4.)" << endl;
            cout << "2.) <---  Menabung \t\t\t Info Saldo \t---> 5.)" << endl;
            cout << "3.) <---  Penarikan \t\t\t Keluar \t---> 6.)" << endl;
            cout << "---------------------------------------------------------------------------------------------" << endl;
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
                    cout << "Pilihan salah ...... !!" << endl;
                    break;
            }
        } else {
            system("cls");
            cout << endl;
            cout << endl;
            cout << "===========================WARNING=========================" << endl;
            cout << "\tMAAF PIN YANG ANDA MASUKAN SALAH" << endl;
            cout << "\tSILAHKAN ULANGI DAN PERIKSA PIN ANDA" << endl;
            cout << "\tTERIMAKASIH" << endl;
            cout << "==========================================================" << endl;
            cout << endl;
            cout << "\t\tProgram Selesai ............." << endl;
            cout << endl;
            return 0;
        }
    }
}

