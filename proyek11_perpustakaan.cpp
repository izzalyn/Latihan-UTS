#include <iostream>
using namespace std;

int main() {
    int menu, hari;

    cout << "--- MENU PERPUSTAKAAN ---";
    cout << endl;
    cout << "1. Pinjam Buku";
    cout << endl;
    cout << "2. Kembalikan Buku";
    cout << endl;
    cout << "3. Cek Denda";
    cout << endl;
    cout << "4. Cek Koleksi";
    cout << endl;
    cout << "5. Keluar";
    cout << endl;
    cout << "Pilih menu: ";
    cin >> menu;

    switch (menu) {
        case 1:
            cout << "Menu Pinjam Buku dipilih.";
            cout << endl;
            break;
        case 2:
            cout << "Menu Kembalikan Buku dipilih.";
            cout << endl;
            break;
        case 3:
            cout << "Masukkan jumlah hari keterlambatan: ";
            cin >> hari;

            if (hari <= 0) {
                cout << "Tidak ada denda.";
                cout << endl;
            } else if (hari <= 3) {
                cout << "Denda: Rp " << hari * 2000;
                cout << endl;
            } else {
                cout << "Denda: Rp " << hari * 5000;
                cout << endl;
            }
            break;
        case 4:
            cout << "Koleksi: Buku A, Buku B, Buku C.";
            cout << endl;
            break;
        case 5:
            cout << "Keluar.";
            cout << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia!";
            cout << endl;
            break;
    }

    return 0;
}