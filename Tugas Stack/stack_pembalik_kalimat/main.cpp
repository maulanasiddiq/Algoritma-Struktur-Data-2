#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#define MaxElemen 1000

using namespace std;

struct Tumpukan
{
    char Isi[MaxElemen];
    int Atas;
} T;

void PUSH (char x)
{
    if(T.Atas == MaxElemen)
    {
        cout << "\nTumpukan Sudah Penuh";
        getch();
    }
    else
    {
        T.Atas = T.Atas + 1;
        T.Isi[T.Atas] = x;
    }
}

char POP()
{
    char hasil;
    if(T.Atas == 0)
    {
        cout << "\nTumpukan sudah kosong";
        hasil = ' ';
    }
    else
    {
        hasil = T.Isi[T.Atas];
        T.Atas = T.Atas - 1;
    }
return hasil;
}

int main ()
{
    int I;
    char Kalimat[MaxElemen];

    T.Atas =0;
    cout << "******************************\n";
    cout << "NAMA   : MAULANA ABDUL SIDDIQ\n";
    cout << "NIM    : 16090112\n";
    cout << "KELAS  : 2D TEKNIK INFORMATIKA\n";
    cout << "ALGORITMA DAN STRUKTUR DATA 2\n";
    cout << "PROGRAM STACK PEMBALIK KALIMAT\n";
    cout << "******************************\n\n";

    cout << "Masukkan kalimat : ";
    gets(Kalimat);
    cout << "\n\nKalimat Asli\t\t\t: " << Kalimat;


    for(I=0;I<strlen(Kalimat);I++)
    {
        PUSH(Kalimat[I]);
    }

    cout<<"\nKalimat Setelah di Balik\t: ";


    for (I=0;I<strlen(Kalimat);I++)
    {
        cout<<""<<POP();
    }
    getch();
}
