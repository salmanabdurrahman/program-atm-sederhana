#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

// Variabel global
int jumlah = 1000000;

// Fungsi transfer uang
void tf() {
    string nama, jenis, ket;
    int norek, transfer;
    cout << endl;
    cout << " ========== TRANSFER UANG ===========\n" << endl;
    cout << " Masukan Nama Pemilik Rekening : "; cin >> nama;
    cout << " Masukan Jenis ATM bank        : "; cin >> jenis;
    cout << " Masukan No Rekening Tujuan    : "; cin >> norek;
    cout << " Masukan Jumlah Transfer Uang RP. "; cin >> transfer;
    cout << " Keterangan Pembayaran         : "; cin >> ket;
    cout << endl;
    jumlah -= transfer;

    cout << " Preview Pembayaran Anda";
    cout << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Nama" << "\t \t" << "Jenis" << "\t\t" << "No Rek" << "\t\t" << "Jumlah" << " \t\t" << "Keterangan" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    cout << nama << " \t \t " << jenis << " \t\t" << norek << " \t\t " << transfer << " \t\t " << ket << endl;
    cout << "-------------------------------------------------------------------------------------------------------------" << endl;
    cout << " Terimakasih Transaksi Anda Sedang Diproses .... " << endl;
    cout << " SISA SALDO RP." << jumlah << endl;
    cout << endl;
    int cod;
    cout << " Masukan kode Angka Bebas Untuk Kembali Ke Home = "; cin >> cod;
    system("cls");
}

// Fungsi menabung
void nabung() {
    int uang;
    cout << endl;
    cout << " ========== SETOR TUNAI ===========" << endl;
    cout << endl;
    cout << " Masukan Jumlah Uang RP. "; cin >> uang;

    jumlah += uang;
    cout << " Uang Pada ATM Anda Saat Ini RP. " << jumlah << endl;
    cout << "......." << endl;
    cout << endl;
    int cod;
    cout << " Masukan kode Angka Bebas Untuk Kembali Ke Home = "; cin >> cod;
    system("cls");
}

// Prosedur tampil informasi kelompok
void tampil() {
    cout << endl;
    cout << "================= INFORMASI KELOMPOK ================\n" << endl;
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
    cout << endl;
    int cod;
    cout << " Masukan kode Angka Bebas Untuk Kembali Ke Home = "; cin >> cod;
    system("cls");
}

// Prosedur untuk menampilkan saldo
void saldo() {
    cout << endl;
    cout << "============================SALDO ATM ANDA======================================\n" << endl;
    cout << " \t SALDO ANDA RP." << jumlah << endl;
    cout << "================================================================================" << endl;
    cout << endl;
    int cod;
    cout << " Masukan kode Angka Bebas Untuk Kembali Ke Home = "; cin >> cod;
    system("cls");
}

// Prosedur untuk keluar
void exit_program() {
    cout << "==================================================================" << endl;
    cout << " \t \t Terimakasih ... " << endl;
    cout << " \t \t Universitas Amikom Yogyakarta " << endl;
    cout << "==================================================================" << endl;
}

// Prosedur untuk menampilkan judul
void judul() {
    cout << " \t \t FINAL PROJECT STUKTUR DATA " << endl;
    cout << " \t \t    MESIN ATM SEDERHANA " << endl;
    cout << endl;
    cout << "================================================================== \t \t" << endl;
    cout << endl;
    cout << "#################Welcome to ATM UNGU##############################" << endl;
    cout << " \t \t Kelompok 7 " << endl;
    cout << " \t \t your PIN 123456 " << endl;
    cout << "#################@amikom/fakultas_ilmu_komputer/2023##############" << endl << endl;
}

int main() {
    int pin, pilihan, pilih2;
    int ambil[2] = {500000, 1000000};

    judul();
    cout << " Masukan PIN anda : "; cin >> pin;

    while (true) {
        if (pin == 123456) {
            cout << endl;
            cout << "\t<-1 Transfer Uang         Info Data 4->" << endl << endl;
            cout << "\t<-2 Menabung             Info Saldo 5->" << endl << endl;
            cout << "\t<-3 Penarikan                Keluar 6->" << endl << endl;
            cout << endl;
            cout << " Masukan Pilihan = "; cin >> pilihan;

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
                    cout << " ===================================" << endl;
                    cout << " \t PENARIKAN UANG " << endl;
                    cout << " " << endl;
                    cout << " 1. RP.500.000           2. RP.1.000.000" << endl;
                    cout << endl;
                    cout << endl;
                    cout << " ==================================" << endl;
                    cout << endl;
                    cout << " Masukan Pilihan : "; cin >> pilih2;
                    system("cls");
                    if (pilih2 == 1) {
                        cout << "\t\tPenarikan Berhasil" << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Anda Melakukan Penarikan Tunai Sebesar RP.500.000" << endl;
                        jumlah -= ambil[0];
                        cout << "" << endl;
                        cout << "Sisa Saldo Anda RP. " << jumlah << endl;
                    } else if (pilih2 == 2) {
                        cout << "\t\tPenarikan Berhasil" << endl;
                        cout << endl;
                        cout << endl;
                        cout << "Anda Melakukan Penarikan Tunai Sebesar RP.1.000.000" << endl;
                        jumlah -= ambil[1];
                        cout << "" << endl;
                        cout << "Sisa Saldo Anda RP. " << jumlah << endl;
                    } else {
                        cout << " Pilihan Yang Anda Masukan Salah " << endl;
                        cout << "......" << endl;
                    }
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
                    cout << " Pilihan salah ...... !!" << endl;
                    break;
            }
        } else {
            system("cls");
            cout << endl;
            cout << endl;
            cout << " ===========================WARNING========================= " << endl;
            cout << " \tMAAF PIN YANG ANDA MASUKAN SALAH " << endl;
            cout << " \tSILAHKAN ULANGI DAN PERIKSA PIN ANDA " << endl;
            cout << " \tTERIMAKASIH " << endl;
            cout << " =========================================================== " << endl;
            cout << endl;
            cout << " \t \t Program Selesai ............." << endl;
            cout << endl;
            return 0;
        }
    }
}

