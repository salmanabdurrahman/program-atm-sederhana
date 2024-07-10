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

