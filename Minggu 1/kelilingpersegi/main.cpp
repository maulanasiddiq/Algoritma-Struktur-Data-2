#include <iostream>

using namespace std;
void keliling()
{
    cout << "\t\t**MENGHITUNG LUAS PERSEGI PANJANG**\n\n\n" << "\n";
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
    cout << "PROGRAM KELILING PERSEGI\n";
    keliling();
    return 0;
}
