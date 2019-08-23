#include <iostream>
#include <conio.h>

using namespace std;

float get_nilai(float a, float b) {
    return (a + b) / 2;
}

int main() {
// definisi struktur
struct Mahasiswa {
    char nim[10];
    char nama[30];
    float uts;
    float uas;
};
Mahasiswa mhs;

// entri data
cout << "Masukkan NIM : ";
cin.getline(mhs.nim, 10);
cout << "Masukkan Nama : ";
cin.getline(mhs.nama, 30);
cout << "UTS : ";
cin >> mhs.uts;
cout << "UAS : ";
cin >> mhs.uas;

// tampil data
cout << "\nNIM : " << mhs.nim;
cout << "\nNama : " << mhs.nama;
cout << "\nNilai : " << get_nilai(mhs.uts, mhs.uas);
getch();
}
