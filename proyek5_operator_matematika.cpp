#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;
    cout << "Masukkan ekspresi (cth: 5 + 2): ";
    cin >> a >> op >> b;

    switch (op) {
        case '+': cout << "Hasil: " << a + b; break;
        case '-': cout << "Hasil: " << a - b; break;
        case '*': cout << "Hasil: " << a * b; break;
        case '/': 
            if (b != 0) cout << "Hasil: " << a / b;
            else cout << "Kesalahan: Tidak dapat membagi dengan nol";
            break;
        default: cout << "Operator tidak valid";
    }
    return 0;
}