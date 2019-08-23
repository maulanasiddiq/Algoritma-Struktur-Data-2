
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
 SetConsoleTitle("Binary Search");
    int data[15] = {1,3,6,10,15,21,28,36,45,55,75,
                    150,750,1500,3000};
    int cari[4] = {21,25,750,1250};
    int tmp, n=15, langkah, total=0, awal,tengah,temu,akhir;

    for(int h=0; h<4; h++)
    {
        n = 15;
        awal = 0;
        akhir = n-1;
        langkah = 0;
        temu = 0;
        while(n > 0)
        {
            langkah++;
            tengah = (awal+akhir)/2;
            n--;
            if(cari[h] == data[tengah])
            {
                temu = 1;
                break;
            }

            else {
                if(cari[h] > data[tengah])
                    awal = tengah+1;
                else
                    akhir = tengah-1;
            }

        }

        if(temu == 1)
        {
            cout<<"Bilangan "<<cari[h]<<" di posisi"
            <<tengah<<endl;
            cout<<"Langkah yg dibutuhkan : "<<langkah<<endl;
        }
        else {
            cout<<"Bilangan tidak ditemukan"<<endl;
            cout<<"langkah sebanyak : "<<langkah<<endl;
        }
    }



    system("pause");
}
