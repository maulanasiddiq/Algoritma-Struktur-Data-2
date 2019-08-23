#include <iostream>

using namespace std;

int Tambah(int x);
int main()
{
    int a, hasil;
    cout << "Masukan Bilangan : ";
    cin >> a;
    cout << "Nilai a Awal = " << a << endl;
    hasil = Tambah(a);
    cout << "Nilai a Akhir = " << a << endl;
    cout << "Hasil = " << hasil;
}
int Tambah(int x)
{
    cout << "Nilai x Awal = " << x << endl;
    x = x+2;
    cout << "Nilai x Akhir = " << x << endl;
    return x;
}
