#include <iostream>

using namespace std;

class Pecahan //pemrograman berorientasi objek
{
public :
    //function member
    void Isikan(int,int);
    double Nilai();
    void SeperX();
    void Cetak();

private :
    //data member
    int lang, but;
};

int main()
{
    Pecahan X; //pembuatan objek
    X.Isikan(22,7);
    cout << "X = ";
    X.Cetak();
    cout << " = " << X.Nilai() << endl;
    X.SeperX();
    cout << "1/X = "; X.Cetak();
    cout << endl;
    return 0;
}

void Pecahan::Isikan(int pembilang, int penyebut) // :: Operator Scope
{
    lang = pembilang;
    but = penyebut;
}

double Pecahan::Nilai()
{
    return double(lang)/but;
}

void Pecahan::SeperX()
{
    int temp = lang;
    lang = but;
    but = temp;
}

void Pecahan::Cetak()
{
    cout << lang << "/" << but;
}
