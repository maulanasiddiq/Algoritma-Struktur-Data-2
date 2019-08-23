#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

//Deklarasi struct
struct data_mahasiswa
{
    long int nim;
    char nama[100];
    char fakultas[100];
};

//Deklarasi variabel struct
data_mahasiswa mhs[i];

int main()
{
    //Input struct data mahasiswa
    cout << "Masukan Jumlah Data : ";
    cin >> n;
    cout << "Data Mahasiswa" << endl;
    for(i=1;i<=n;i++){
        cout << "NIM : ";
        cin >> mhs[i].nim;
    }

    //Output struct data mahasiswa

}
