#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int dataku[10] = {7,9,2,10,15,4,5,6,13,11};
    int caridata, i, flag = 0;

    cout << "PENCARIAN DENGAN SEQUENTIAL SEARCH" << endl;
    cout << "----------------------------------" << endl;
    cout << "Data : ";
    for(int n=0; n<10; n++)
    {
        cout << setw(4) << dataku[n];
    }
    cout << endl << endl;

    cout << "Masukan data yang ingin Anda cari : ";
    cin >> caridata;

    //cari dengan metode sequential search()
    for(i=0; i<10; i++)
    {
        if(dataku[i]==caridata)
        {
            flag = 1;
            break;
        }
    }

    //cetak hasil
    if(flag==1)
    {
        cout << "Data ditemukan pada indeks ke- " << i << endl;
    }
    else
    {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}
