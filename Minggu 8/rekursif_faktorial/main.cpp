#include <iostream>

using namespace std;

long rekursif_faktorial(int f)
{
    if(f==0)
        return 1;
    else
        return f * rekursif_faktorial(f-1);
}

int main()
{
    int x;

    cout << "Masukan Angka yang difaktorialkan : ";
    cin >> x;
    cout << x << "! = " << rekursif_faktorial(x) << endl;

    return 0;
}
