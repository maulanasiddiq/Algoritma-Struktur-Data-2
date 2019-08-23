#include <iostream>

using namespace std;

/*Kode Soal A1
Nama    : Maulana Abdul Siddiq
NIM     : 16090112
Kelas   : 2D - TI
Ujian Tengah Semester Genap
*/

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
data_dosen data[10];

int main()
{
    int jumlah;
    cout << "Masukan Jumlah Data yang akan diinputkan : ";
    cin >> jumlah;

    //Input Data Dosen
    for(int j=1;j<=jumlah;j++){
        cout << "\nData Dosen ke-" <<j<< "\n";
        cout<<"-----------------------\n";
        cout << " NIDN                : ";
        cin >> data[j].nidn;
        cout << " Nama                : ";
        cin >> data[j].nama;
        cout << " Jabatan Fungsional  : ";
        cin >> data[j].jabatan_fungsional;
        cout << " Masa Kerja          : ";
        cin >> data[j].masa_kerja;
        cout << " PT Asal             : ";
        cin >> data[j].pt_asal;
        cout << "\n\n";
    }

    //Output Data Dosen
    cout << "Hasil Penginputan Data Dosen\n\n";

    for(int k=1;k<=jumlah;k++){
        cout << " Data Dosen ke-" <<k<< "\n";
        cout << "-----------------------\n";
        cout << " NIDN                : " << data[k].nidn << endl;
        cout << " Nama                : " << data[k].nama << endl;
        cout << " Jabatan Fungsional  : " << data[k].jabatan_fungsional << endl;
        cout << " Masa Kerja          : " << data[k].masa_kerja << endl;
        cout << " PT Asal             : " << data[k].pt_asal << endl;
        cout << "\n\n";
    }
}
