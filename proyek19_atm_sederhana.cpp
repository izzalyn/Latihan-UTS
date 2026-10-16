#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double saldo = 1000000;
    double nominal;

    cout << "=== ATM SEDERHANA ===";
    cout << endl;
    cout << "1. Cek Saldo";
    cout << endl;
    cout << "2. Setor Tunai";
    cout << endl;
    cout << "3. Tarik Tunai";
    cout << endl;
    cout << "4. Transfer";
    cout << endl;
    cout << "5. Keluar";
    cout << endl;
    cout << "Pilih menu (1-5): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Saldo Anda saat ini: Rp " << saldo;
            cout << endl;
            break;

        case 2:
            cout << "Masukkan nominal setor tunai: Rp ";
            cin >> nominal;
            if (nominal <= 0) {
                cout << "Error: Nominal transaksi harus positif!";
                cout << endl;
            } else {
                saldo += nominal;
                cout << "Setor tunai berhasil! Saldo saat ini: Rp " << saldo;
                cout << endl;
            }
            break;

        case 3:
            cout << "Masukkan nominal tarik tunai: Rp ";
            cin >> nominal;
            if (nominal <= 0) {
                cout << "Error: Nominal transaksi harus positif!";
                cout << endl;
            } else if (nominal > saldo) {
                cout << "Error: Saldo tidak mencukupi!";
                cout << endl;
            } else {
                saldo -= nominal;
                cout << "Tarik tunai berhasil! Sisa saldo: Rp " << saldo;
                cout << endl;
            }
            break;

        case 4:
            cout << "Masukkan nominal transfer: Rp ";
            cin >> nominal;
            if (nominal <= 0) {
                cout << "Error: Nominal transaksi harus positif!";
                cout << endl;
            } else if (nominal > saldo) {
                cout << "Error: Saldo tidak mencukupi untuk transfer!";
                cout << endl;
            } else {
                saldo -= nominal;
                cout << "Transfer berhasil! Sisa saldo: Rp " << saldo;
                cout << endl;
            }
            break;

        case 5:
            cout << "Terima kasih telah menggunakan layanan ATM.";
            cout << endl;
            break;

        default:
            cout << "Pilihan menu tidak tersedia!";
            cout << endl;
            break;
    }

    return 0;
}