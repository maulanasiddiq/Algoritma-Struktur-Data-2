#include <iostream>

using namespace std;

int main()
{
    float data[2][3];
    int baris, kolom;
    for(baris= 0; baris<2; baris++)
    {
        for(kolom=0; kolom<3; kolom++)
        {
            cout<<"Isi data baris : "<<baris<< "Kolom "<<kolom<< ":";
            cin>>data[baris][kolom];
        }
    }
    cout << endl;
    cout << "Hasil : " << endl;
    for(baris= 0; baris< 2; baris++)
    {
        for(kolom=0; kolom<3; kolom++)
        {
            cout<<data[baris][kolom]<< " ";
        }
        cout << endl;
    }
    return 0;
}
