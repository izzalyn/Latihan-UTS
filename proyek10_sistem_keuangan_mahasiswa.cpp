#include <iostream>
using namespace std;

int main() {
    int menu, metode;
    double nominal;

    cout << "--- MENU KEUANGAN ---";
    cout << endl;
    cout << "1. Cek UKT";
    cout << endl;
    cout << "2. Cek Tagihan";
    cout << endl;
    cout << "3. Pembayaran";
    cout << endl;
    cout << "4. Riwayat Pembayaran";
    cout << endl;
    cout << "5. Keluar";
    cout << endl;
    cout << "Pilih menu: ";
    cin >> menu;

    switch (menu) {
        case 1:
            cout << "UKT Anda: Rp 5.000.000";
            cout << endl;
            break;
        case 2:
            cout << "Tagihan Anda: Rp 5.000.000";
            cout << endl;
            break;
        case 3:
            cout << "Submenu Pembayaran:";
            cout << endl;
            cout << "1. Tunai";
            cout << endl;
            cout << "2. Transfer";
            cout << endl;
            cout << "3. Virtual Account";
            cout << endl;
            cout << "Pilih metode: ";
            cin >> metode;

            cout << "Masukkan nominal: ";
            cin >> nominal;

            if (nominal < 0) {
                cout << "Nominal tidak boleh negatif!";
                cout << endl;
            } else {
                cout << "Pembayaran berhasil disimulasikan.";
                cout << endl;
            }
            break;
        case 4:
            cout << "Belum ada riwayat pembayaran.";
            cout << endl;
            break;
        case 5:
            cout << "Keluar dari program.";
            cout << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia!";
            cout << endl;
            break;
    }

    return 0;
}