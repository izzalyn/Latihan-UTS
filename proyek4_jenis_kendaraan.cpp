#include <iostream>
using namespace std;

int main() {
    int jenis;
    cout << "Pilih Jenis Kendaraan (1: Motor, 2: Mobil, 3: Bus, 4: Truk): ";
    cin >> jenis;

    switch (jenis) {
        case 1: cout << "Motor"; break;
        case 2: cout << "Mobil"; break;
        case 3: cout << "Bus"; break;
        case 4: cout << "Truk"; break;
        default: cout << "Jenis kendaraan tidak valid";
    }
    return 0;
}