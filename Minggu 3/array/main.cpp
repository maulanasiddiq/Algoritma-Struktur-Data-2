#include <iostream>

using namespace std;

int main()
{
    float x[5];
    int i;//Deklarasi larik dengan lima elemen
    for(int i = 1; i <= 5; i++)//mengisi larik
        {
            cout<<"Isi data ";
            cin>>x[i];
        }
    for( i = 1; i <= 5; i++)
        {
            cout<< "Tampilkan hasil "<<x[i]<<endl; //tampilan setelah diisi
        }
}
