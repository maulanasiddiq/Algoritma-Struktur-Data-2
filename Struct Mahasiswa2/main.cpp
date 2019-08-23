#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>

using namespace std;

//Deklarasi struct
struct biodata
    {
        char nama[30];
        int usia;
        char hobi[30];
    };


//Deklarasi variabel struct
biodata bio[10];

int main()
{
    int jumlah;
    cout << "Masukan Jumlah : ";
    cin >> jumlah;


    for(int j=1;j<=jumlah;j++){
        cout<<" Biodata ke-"<<j<<"\n";
        cout<<"-----------------------\n";
        cout<<" Nama      : ";
        cin>>bio[j].nama;
        cout<<" Usia     : ";
        cin>>bio[j].usia;
        cout<<" Hobi : ";
        cin>>bio[j].hobi;
        cout<<"\n\n";
    }

    cout << "----------------------------------\n";
    cout << "Data Output : \n";
    cout << "----------------------------------\n\n";

    for(int k=1;k<=jumlah;k++){
        cout<<" Data bio ke-"<<k<<"\n";
        cout<<"-----------------------\n";
        cout<<" Nama      : "<<bio[k].nama<<endl;
        cout<<" Usia     : "<<bio[k].usia<<endl;
        cout<<" Hobi : "<<bio[k].hobi<<endl;
        cout<<"\n\n";
        //getch();
    }

    //Output struct data bio

}
