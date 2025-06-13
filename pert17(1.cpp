#include <iostream>
using namespace std;

void garis() {
    cout << "\n----------------------\n";
}

int main() {
    garis(); // memanggil fungsi garis
    cout << "AMIK BSI - Pondok Labu" << endl;
    garis(); // memanggil fungsi garis

    cin.get(); // tunggu input agar program tidak langsung keluar
    return 0;
}

