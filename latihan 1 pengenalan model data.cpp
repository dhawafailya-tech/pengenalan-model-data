#include <iostream>
using namespace std;

int main() {
    string npm, nama;
    float tugas1, tugas2, tugas3, rata_rata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "NPM : ";
    cin >> npm;

    cout << "Nama : ";
    cin.ignore();
    getline(cin, nama);

    cout << "Nilai Tugas I : ";
    cin >> tugas1;

    cout << "Nilai Tugas II : ";
    cin >> tugas2;

    cout << "Nilai Tugas III : ";
    cin >> tugas3;

    rata_rata = (tugas1 + tugas2 + tugas3) / 3;

    cout << "\nNPM " << npm << " Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata_rata;
    cout << " dari hasil tugas yang diikutinya." << endl;

    return 0;
}