#include <iostream>

using namespace std;

class Pecahan
{
public :
    Pecahan();
    Pecahan(int);
    Pecahan(int,int);
    void Cetak();

private :
    int lang, but;
};

int main()
{
    Pecahan x,y(4),z(22,7);
    cout << "x = ";
    x.Cetak();
    cout << "\ny = ";
    y.Cetak();
    cout << "\nz = ";
    z.Cetak();
}

Pecahan x,y(4),z()
