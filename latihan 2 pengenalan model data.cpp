#include <iostream>
using namespace std;

int main() {
    string nama;
    float keaktifan, tugas, ujian;
    float murni_keaktifan, murni_tugas, murni_ujian;
    float nilai_akhir;

    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;
    cout << "Nama Siswa : ";
    getline(cin, nama);

    cout << "Nilai Keaktifan : ";
    cin >> keaktifan;

    cout << "Nilai Tugas : ";
    cin >> tugas;

    cout << "Nilai Ujian : ";
    cin >> ujian;

    murni_keaktifan = keaktifan * 20 / 100;
    murni_tugas = tugas * 30 / 100;
    murni_ujian = ujian * 50 / 100;

    nilai_akhir = murni_keaktifan + murni_tugas + murni_ujian;

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Dengan nilai presentase yang dihasilkan:" << endl;
    cout << "Nilai Keaktifan * 20% : " << murni_keaktifan << endl;
    cout << "Nilai Tugas * 30% : " << murni_tugas << endl;
    cout << "Nilai Ujian * 50% : " << murni_ujian << endl;

    cout << "\nJadi Siswa yang bernama " << nama;
    cout << " Memperoleh nilai akhir sebesar " << nilai_akhir << endl;

    return 0;
}