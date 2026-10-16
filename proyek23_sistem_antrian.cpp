#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int nomorTerakhir = 0;
    int nomorPanggil = 0;

    do {
        cout << endl;
        cout << "=== SISTEM ANTRIAN ===";
        cout << endl;
        cout << "1. Ambil Nomor";
        cout << endl;
        cout << "2. Panggil Nomor";
        cout << endl;
        cout << "3. Lihat Nomor";
        cout << endl;
        cout << "4. Reset";
        cout << endl;
        cout << "5. Keluar";
        cout << endl;
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                nomorTerakhir++;
                cout << "Nomor antrian Anda: " << nomorTerakhir;
                cout << endl;
                break;
            case 2:
                if (nomorPanggil < nomorTerakhir) {
                    nomorPanggil++;
                    cout << "Memanggil nomor antrian: " << nomorPanggil;
                    cout << endl;
                } else {
                    cout << "Belum ada antrian baru untuk dipanggil!";
                    cout << endl;
                }
                break;
            case 3:
                cout << "Nomor terakhir diambil: " << nomorTerakhir;
                cout << endl;
                cout << "Nomor yang sedang dipanggil: " << nomorPanggil;
                cout << endl;
                break;
            case 4:
                nomorTerakhir = 0;
                nomorPanggil = 0;
                cout << "Antrian berhasil direset ke 0.";
                cout << endl;
                break;
            case 5:
                cout << "Keluar dari program antrian.";
                cout << endl;
                break;
            default:
                cout << "Pilihan tidak tersedia!";
                cout << endl;
                break;
        }

    } while (pilihan != 5);

    return 0;
}