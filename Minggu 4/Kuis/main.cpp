#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

//Deklarasi struct
struct biodata
{
    char nama[100];
    int usia;
    char hobi[100];
};

//Deklarasi variabel struct
biodata data[10];

int main()
{
    //Input struct data mahasiswa
    int i,n;
    cout << "Masukan Jumlah Data : ";
    cin >> n;
    for(i=1;i<=n;i++){
        cout << "\nData Diri " << i << endl;
        cout << "Nama : ";
        cin >> data[i].nama,100;
        cout << "Usia : ";
        cin >> data[i].usia;
        cout << "Hobi : ";
        cin >> data[i].hobi,100;
    }

    //Output struct data mahasiswa
    for(i=1;i<=n;i++){
        cout << "\n\nNama : " << data[i].nama;
        cout << "\nUsia : " << data[i].usia << " Tahun";
        cout << "\nHobi : " << data[i].hobi;
    }
}
