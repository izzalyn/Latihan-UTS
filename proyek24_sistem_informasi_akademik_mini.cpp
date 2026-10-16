#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihanUtama, subKrs;
    string nama = "Belum diisi", nim = "Belum diisi", prodi = "Belum diisi";
    double nilai = 0;
    int tagihan = 5000000, bayar = 0;

    do {
        cout << endl;
        cout << "===== SISTEM INFORMASI AKADEMIK =====";
        cout << endl;
        cout << "1. Data Mahasiswa";
        cout << endl;
        cout << "2. KRS";
        cout << endl;
        cout << "3. Nilai";
        cout << endl;
        cout << "4. Jadwal";
        cout << endl;
        cout << "5. Keuangan";
        cout << endl;
        cout << "6. Keluar";
        cout << endl;
        cout << "Pilih menu (1-6): ";
        cin >> pilihanUtama;

        switch (pilihanUtama) {
            case 1:
                cout << "--- DATA MAHASISWA ---";
                cout << endl;
                cout << "Nama: " << nama;
                cout << endl;
                cout << "NIM: " << nim;
                cout << endl;
                cout << "Prodi: " << prodi;
                cout << endl;
                cout << "Ingin update data? (1: Ya, 2: Tidak): ";
                int update;
                cin >> update;
                if (update == 1) {
                    cout << "Masukkan Nama: ";
                    cin.ignore();
                    getline(cin, nama);
                    cout << "Masukkan NIM: ";
                    cin >> nim;
                    cout << "Masukkan Prodi: ";
                    cin.ignore();
                    getline(cin, prodi);
                    cout << "Data berhasil diperbarui!";
                    cout << endl;
                }
                break;

            case 2:
                cout << "--- SUBMENU KRS ---";
                cout << endl;
                cout << "1. Lihat KRS";
                cout << endl;
                cout << "2. Tambah Mata Kuliah";
                cout << endl;
                cout << "Pilih submenu KRS: ";
                cin >> subKrs;

                switch (subKrs) {
                    case 1:
                        cout << "Menampilkan daftar mata kuliah dalam KRS aktif.";
                        cout << endl;
                        break;
                    case 2:
                        cout << "Mata kuliah berhasil ditambahkan ke KRS.";
                        cout << endl;
                        break;
                    default:
                        cout << "Pilihan submenu KRS tidak valid!";
                        cout << endl;
                        break;
                }
                break;

            case 3:
                cout << "--- MENU NILAI & GRADE ---";
                cout << endl;
                cout << "Masukkan nilai angka (0-100): ";
                cin >> nilai;

                if (nilai >= 85 && nilai <= 100) {
                    cout << "Grade: A";
                    cout << endl;
                } else if (nilai >= 70 && nilai < 85) {
                    cout << "Grade: B";
                    cout << endl;
                } else if (nilai >= 55 && nilai < 70) {
                    cout << "Grade: C";
                    cout << endl;
                } else if (nilai >= 40 && nilai < 55) {
                    cout << "Grade: D";
                    cout << endl;
                } else if (nilai >= 0 && nilai < 40) {
                    cout << "Grade: E";
                    cout << endl;
                } else {
                    cout << "Error: Nilai tidak valid!";
                    cout << endl;
                }
                break;

            case 4:
                cout << "--- JADWAL KULIAH ---";
                cout << endl;
                cout << "Senin: Algoritma dan Pemrograman";
                cout << endl;
                cout << "Selasa: Matematika Diskrit";
                cout << endl;
                break;

            case 5:
                cout << "--- MENU KEUANGAN ---";
                cout << endl;
                cout << "Sisa Tagihan UKT: Rp " << tagihan;
                cout << endl;
                cout << "Masukkan nominal pembayaran: Rp ";
                cin >> bayar;

                if (bayar <= 0) {
                    cout << "Error: Nominal pembayaran harus bernilai positif!";
                    cout << endl;
                } else if (bayar > tagihan) {
                    cout << "Error: Nominal melebihi sisa tagihan!";
                    cout << endl;
                } else {
                    tagihan -= bayar;
                    cout << "Pembayaran berhasil! Sisa tagihan: Rp " << tagihan;
                    cout << endl;
                }
                break;

            case 6:
                cout << "Terima kasih telah menggunakan Sistem Informasi Akademik.";
                cout << endl;
                break;

            default:
                cout << "Pilihan menu tidak tersedia! Silakan masukkan angka 1-6.";
                cout << endl;
                break;
        }

    } while (pilihanUtama != 6);

    return 0;
}