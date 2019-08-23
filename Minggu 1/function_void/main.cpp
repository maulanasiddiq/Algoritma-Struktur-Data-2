#include <iostream>

using namespace std;

void kecepatan()
{
    double s,t,v;
    cout<< "Masukan jarak tempuh (dalam satuan KM)  : ";
    cin>>s;
    cout<< "Masukan waktu tempuh (dalam satuan Jam) : ";
    cin>> t;
    cout <<"\n\n";
    cout << "JARAK TEMPUH         : " <<s<< "Km\n";
    cout << "WAKTU TEMPUH         : " <<t<< "Jam\n\n";
    cout << "KECEPATAN RATA-RATA  = " <<s/t<< "Km/Jam" << endl;
}

int main()
{
    kecepatan();
    return 0;
}
