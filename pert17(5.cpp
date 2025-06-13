#include <iostream>   // pengganti <iostream.h>
using namespace std;

// Fungsi menghitung luas lingkaran
float luas(int r) {
    return 3.14f * r * r;
}

// Fungsi menghitung keliling lingkaran
float kel(int r) {
    return 2 * 3.14f * r;
}

int main() {
    int j;
    cout << "Masukkan Jari-jari = ";
    cin >> j;

    cout << "Luas lingkaran = " << luas(j) << endl;
    cout << "Keliling lingkaran = " << kel(j) << endl;

    cin.get(); // menahan layar agar tidak langsung tertutup
    cin.get(); // tambahan karena sebelumnya sudah ada cin >>
    return 0;
}

