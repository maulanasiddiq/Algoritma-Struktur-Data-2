#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n;
    //Isi Stack
    cout << "Masukan banyak stack" << endl;
    cin >> n;

    int s[n];
    int x, top;
    top=-1; //Inisialisasi stack

    //Push Data
    while (top<n-1)
    {
        cout << "Inputkan isi stack : ";
        cin >> x;
        top=top+1;
        s[top]=x;
    }

    cout << endl;
    cout << "Isi stack : " << endl;

    //Pop Data
    while(top>-1)
    {
        x=s[top];
        cout << x << "  ";
        top=top-1;
    }
    getch();
}
