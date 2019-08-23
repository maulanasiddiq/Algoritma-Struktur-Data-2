#include <iostream>

using namespace std;
void nama()
{
    cout << "Nama : Joni" << endl;
    cout << "Usia : 21 tahun" << endl;
}
void keliling()
{
    cout << "\t\t**MENGHITUNG KELILING PERSEGI**\n\n\n";
    double s;
    cout << "Masukan Panjang Sisi Persegi: ";
    cin >> s;
    cout << "\n\n";
    cout << "PANJANG PERSEGI PANJANG : " << s << "\n";
    cout << "MAKA Keliling Persegi : " << 4*s;
}

int main()
{
    cout << "NAMA   : MAULANA ABDUL SIDDIQ\n";
    cout << "NIM    : 16090112\n";
    cout << "KELAS  : 2D\n";
    cout << "PRODI  : D4 TEKNIK INFORMATIKA\n\n";
    cout << "PRETEST\n";
    int input;
    cout << "--MENU PROGRAM--\n\n";
    cout << "1. BIODATA\n";
    cout << "2. KELILING PERSEGI\n";
    cout << "\tMasukkan Menu Program : ";
    cin >> input;
    switch(input)
    {
        case 1 :
            cout << "\t\t**BIODATA**\n\n";
            nama();
        break;
        case 2 :
            cout << "\t\t**KELILING PERSEGI**\n\n";
            keliling();
        break;
    }
    return 0;
}
