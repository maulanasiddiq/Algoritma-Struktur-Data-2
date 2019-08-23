#include <iostream>

using namespace std;

float luas(float p, float l)
{
    float hasil;
    hasil = p*l;
    return hasil;
}

int main()
{
    float p, l;
    cout << "Masukan panjang persegi panjang = ";
    cin >> p;
    cout << "Masukan lebar persegi panjang = ";
    cin >> l;
    cout << "Luas persegi panjang = " << luas(p,l);
    return 0;
}
