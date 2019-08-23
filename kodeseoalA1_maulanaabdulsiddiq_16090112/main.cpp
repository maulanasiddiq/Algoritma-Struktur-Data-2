#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

//Deklarasi struct
struct data_dosen
{
    long int nidn;
    char nama[100];
    char jabatan_fungsional[100];
    float masa_kerja;
    char pt_asal[100];
};

//Deklarasi variabel struct
data_dosen data;

int main()
{
    int jumlah;
    cout << "Masukan Jumlah Data yang akan diinputkan : ";
    cin >> jumlah;

    //Input struct data dosen
    for(int j=1;j<=jumlah;j++){
        cout << "\nData Dosen ke-" <<j<< "\n";
        cout<<"-----------------------\n";
        cout<<" NIDN                : "; cin>>data.nidn;
        cout<<" Nama                : "; fflush(stdin); gets(data.nama);
        cout<<" Jabatan Fungsional  : "; fflush(stdin); gets(data.jabatan_fungsional);
        cout<<" Masa Kerja          : "; cin>>data.masa_kerja;
        cout<<" PT Asal             : "; fflush(stdin); gets(data.pt_asal);
        cout<<"\n\n";
    }

    //Output struct data mahasiswa
    cout << "Hasil Penginputan Data Dosen\n\n";

    for(int k=1;k<=jumlah;k++){
        cout << " Data Dosen ke-" <<k<< "\n";
        cout << "-----------------------\n";
        cout << " NIDN                : " << data.nidn << endl;
        cout << " Nama                : " << data.nama << endl;
        cout << " Jabatan Fungsional  : " << data.jabatan_fungsional << endl;
        cout << " Masa Kerja          : " << data.masa_kerja << endl;
        cout << " PT Asal             : " << data.pt_asal << endl;
        cout << "\n\n";
    }
}
