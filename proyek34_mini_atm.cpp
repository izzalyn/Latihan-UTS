#include <iostream>
using namespace std;

int main() {
    int pilihan;
    long saldo = 1000000;
    long nominal;

    cout << "----- ATM -----";
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
            cout << "Sisa saldo Anda saat ini: Rp " << saldo;
            cout << endl;
            break;

        case 2:
            cout << "Masukkan jumlah setor tunai: Rp ";
            cin >> nominal;
            saldo = saldo + nominal;
            cout << "Setor tunai berhasil! Saldo baru Anda: Rp " << saldo;
            cout << endl;
            break;

        case 3:
            cout << "Masukkan jumlah tarik tunai: Rp ";
            cin >> nominal;
            if (nominal > saldo) {
                cout << "Transaksi gagal! Saldo Anda tidak mencukupi.";
                cout << endl;
            } else {
                saldo = saldo - nominal;
                cout << "Tarik tunai berhasil! Sisa saldo Anda: Rp " << saldo;
                cout << endl;
            }
            break;

        case 4:
            cout << "Masukkan jumlah transfer: Rp ";
            cin >> nominal;
            if (nominal > saldo) {
                cout << "Transaksi gagal! Saldo Anda tidak mencukupi.";
                cout << endl;
            } else {
                saldo = saldo - nominal;
                cout << "Transfer berhasil! Sisa saldo Anda: Rp " << saldo;
                cout << endl;
            }
            break;

        case 5:
            cout << "Terima kasih telah menggunakan layanan Mini ATM.";
            cout << endl;
            break;

        default:
            cout << "Pilihan menu tidak valid!";
            cout << endl;
            break;
    }

    return 0;
}