#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <windows.h>

using namespace std;

const int MAX_ANTRIAN = 5;

struct orang
{
    string nama;
    int usia;
};

    bool isEmpty = true; // penanda apakah antrian sedang kosong
    bool isFull = false; // penanda apakah antrian sudah penuh
    bool isOver = false; // penanda bahwa program selesai atau tidak

class Antrian
{
public:
    void header();
    void buatAntrian(); // mengisi antrian kosong sebanyak MAX_ANTRIAN dengan variabel kontrol
    void tampilkanMenu(); // menampilkan menu yang ada
    void eksekusiPilihan(); // mengambil pilihan dari user dan eksekusi pilihan tersebut
    void tambahAntrian(); // menambah antrian paling belakang
    void kurangiAntrian(); // mengurangi antrian paling depan dan menampilkan orang yang keluar dari antrian
    void printAntrian(); // menampilkan seluruh antrian yang ada
    void printOrang(); // menampilkan data satu orang saja

private:
    orang antrian[MAX_ANTRIAN];
    int pil, pripil, antri;

};

int main()
{
    system("color a");
    Antrian X;
    X.buatAntrian();
    while(!isOver)
    {
        X.tampilkanMenu();
        X.eksekusiPilihan();
    }
    system("pause");
    return 0;
}

void Antrian::header()
{
    cout << "********************************************************\n";
    cout << "\t\tANTRIAN PENGAMBILAN OBAT\n";
    cout << "\t\t  APOTEK RSUD KARDINAH\n";
    cout << "\t\t      KOTA TEGAL\n";
    cout << "********************************************************\n\n";
}

//mengisi data awal dari antrian
void Antrian::buatAntrian()
{
    int i;
    for(i=0; i<MAX_ANTRIAN; i++)
    {
        antrian[i].nama = "null"; // antrian dikatakan kosong apabila nama = null
        antrian[i].usia = -1; // dan usia = -1
    }
}

//menampilkan menu utama
void Antrian::tampilkanMenu()
{
    system("cls");
    Antrian::header();
    cout << "--------------------------------------------------------\n";
    cout << "\t\t     MENU PROGRAM\n";
    cout << "--------------------------------------------------------\n";
    cout << "\t\t1) Tambah Antrian\n";
    cout << "\t\t2) Cetak Antrian\n";
    cout << "\t\t3) Panggil Antrian\n";
    cout << "\t\t4) Keluar dari Program\n";
    cout << "--------------------------------------------------------\n\n";
    cout << "\t\tMasukkan Pilihan Anda : ";
    cin >> pil; //kesatu
}

//pemrosesan pilihan dari menu utama
void Antrian::eksekusiPilihan()
{
    if(pil==1)
    {
        tambahAntrian();
    }
    else if(pil==2)
    {
        //pada pilihan ini ditambahkan submenu print semua atau satu saja
        system("cls");
        Antrian::header();
        cout << "--------------------------------------------------------\n";
        cout << "\t\tCetak Kartu Antrian?\n";
        cout << "--------------------------------------------------------\n";
		cout << "\t\t1) Cetak Semua Antrian\n";
        cout << "\t\t2) Cetak Satu Antrian\n";
        cout << "\t\tPilihan : ";
        cin >> pripil;
        if(pripil==1)
        {
            printAntrian();
        }
        else if(pripil==2)
        {
            printOrang();
        }
    }
    else if(pil==3)
    {
        kurangiAntrian();
    }
    else if(pil==4)
    {
        isOver = true;
    }
}

//prosedur untuk penambahan data antrian
void Antrian::tambahAntrian()
{
    system("cls");
    Antrian::header();
    //diatur perulangan untuk memeriksa apakah ada antrian yang kosong
	int i;
    for(i=0; i<MAX_ANTRIAN; i++)
    {
        //jika ada antrian yang kosong, maka data bisa dimasukkan
		if(antrian[i].nama == "null" && antrian[i].usia == -1)
        {
            cout << "--------------------------------------------------------\n";
            cout << "\t\tNomor Antrian ke-" << i+1 << " >> " << "\n";
            cout << "--------------------------------------------------------\n";
            cout << "\t\tMasukkan Nama  : ";
            cin >> antrian[i].nama;
            cout << "\t\tMasukkan Usia  : ";
            cin >> antrian[i].usia;
            break;
        }
		//jika tidak ada yang kosong, maka tampilkan antrian penuh
        else
        {
            if(i==MAX_ANTRIAN-1)
            {
                cout << "Antrian Sudah Penuh!\n";
            }
        }
    }
    system("pause");
}

//prosedur untuk mengurangi pengantri pertama, lalu antrian setelahnya maju.
void Antrian::kurangiAntrian()
{
    system("cls");
    Antrian::header();
    int i;
	//tampilkan data yang akan dihapus
	cout << "--------------------------------------------------------\n";
    cout << "\t\tAntrian Berikutnya\n";
    cout << "--------------------------------------------------------\n";
    cout << "\t\tNama   : " << antrian[0].nama << endl << endl;
    cout << "\tSilahkan Menuju ke Petugas Apotek\n\n";
	//hapus data dengan mengisi "null" dan -1
    antrian[0].nama = "null";
    antrian[0].usia = -1;

	//menggeser antrian ke atas
    for(i=0; i<MAX_ANTRIAN-1; i++)
    {
        antrian[i].nama = antrian[i+1].nama;
        antrian[i].usia = antrian[i+1].usia;
    }

	//mengisi antrian terakhir dengan data kosong
    antrian[MAX_ANTRIAN-1].nama = "null";
    antrian[MAX_ANTRIAN-1].usia = -1;
    system("pause");
}

//prosedur menampilkan data semua antrian
void Antrian::printAntrian()
{
    system("cls");
    Antrian::header();
    cout << "--------------------------------------------------------\n";
    cout << "\t\tDaftar Semua Antrian\n";
    cout << "--------------------------------------------------------\n";
    int i;
    for(i=0; i<MAX_ANTRIAN; i++)
    {
        cout << "\t\tAntrian ke-" << i+1 << " >> " << endl;
        if(antrian[i].nama == "null" && antrian[i].usia == -1)
        {
            cout << "\t\tKOSONG\n\n";
        }
        else
        {
            cout << "\t\tNama   : " << antrian[i].nama << endl;
            cout << "\t\tUsia   : " << antrian[i].usia << " Tahun\n\n";
        }
    }
    system("pause");
}

//prosedur untuk menampilkan data antrian perorang
void Antrian::printOrang()
{
    system("cls");
    Antrian::header();
    cout << "--------------------------------------------------------\n";
    cout << "\t\tAntrian ke : ";
    cin >> antri;
    cout << "--------------------------------------------------------\n";
    if(antrian[antri].nama == "null" && antrian[antri].usia == -1)
    {
        cout << "\t\tANTRIAN MASIH KOSONG\n\n";
    }
    else
    {
        cout << "\t\tNama   : " << antrian[antri-1].nama << endl;
        cout << "\t\tUsia   : " << antrian[antri-1].usia << " Tahun\n\n";
    }
    system("pause");
}
