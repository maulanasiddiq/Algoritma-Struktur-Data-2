#include <iostream>

using namespace std;

class Pecahan
{
public :
    Pecahan(int,int); //konstruktor
    void Cetak();

private :
    int lang,but;
};

int main()
{
    Pecahan x(-1,3), y(22,7);
    cout << "x = ";
    x.Cetak();
    cout << "y = ";
    y.Cetak();
    return 0;
}

Pecahan::Pecahan(int n, int d)
{
    lang = n;
    but = d;
}

void Pecahan::Cetak()
{
    cout << lang << '/' << but;
}
