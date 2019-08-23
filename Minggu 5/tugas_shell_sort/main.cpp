#include <iostream>

using namespace std;

int main()
{
    //Deklarasi variabel
    int nilai[100];
    int i, n, t;

    //Input
    cout << "************************************************\n";
    cout << "Masukkan Jumlah nilai yg ingin di urutkan : ";
    cin >> n;
    cout << "************************************************\n\n";
    for(i=0; i<n; i++)
    {
        cout<<"Nilai ke-"<<1+i<<"  : ";
        cin>>nilai[i];
    }

    //Shell Sort
    for(int w=n/2; w>0; w=w/2)
    {
        for(int x=w; x<n; x++)
        {
            for (int y=x-w; y>=0; y-=w)
            {
                if(nilai[y+w] < nilai[y]) //Note
                {
                    t=nilai[y+w];
                    nilai[y+w]=nilai[y];
                    nilai[y]=t;
                }
             }
        }
    }

    //Mencetak nilai setelah diurutkan
    cout << "\n\n******************************************************\n";
    cout << "NILAI YG TELAH DIURUTKAN DENGAN MENGGUNAKAN SHELL SORT  \n";
    cout << "******************************************************\n\n";
    for(i=0; i<n; i++)
    {
        cout<<nilai[i]<<" ";
    }
    return 0;
}
