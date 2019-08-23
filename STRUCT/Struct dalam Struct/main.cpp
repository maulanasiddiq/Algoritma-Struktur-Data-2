#include <iostream>

using namespace std;

float get_nilai(float a, float b) {
return (a + b) / 2;
}

int main() {
// definisi struktur
struct Mahasiswa {
    char nim[10];
    char nama[30];
};

struct Nilai {
    float uts;
    float uas;
};

struct NilaiMahasiswa {
    Mahasiswa mhs;
    Nilai nilai;
};

NilaiMahasiswa nm;

// entri data
cout << "Masukkan NIM : ";
cin.getline(nm.mhs.nim, 10);
cout << "Masukkan Nama : ";
cin.getline(nm.mhs.nama, 30);
cout << "UTS : ";
cin >> nm.nilai.uts;
cout << "UAS : ";
cin >> nm.nilai.uas;

// tampil data
cout << "\nNIM : " << nm.mhs.nim;
cout << "\nNama : " << nm.mhs.nama;
cout << "\nNilai : " << get_nilai(nm.nilai.uts, nm.nilai.uas);

}
