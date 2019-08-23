#include <iostream>

using namespace std;

int MAXSTACK;
typedef int itemtype;

typedef struct
{
    itemtype item[300];
    int count;
}stack;

void inisialisasi_stack(stack *s)
{
    s->count = 0;
}

int empty(stack *s)
{
    return (s->count == 0);
}

int full(stack *s)
{
    return (s->count == MAXSTACK);
}

void push(itemtype x, stack *s)
{
    if(full(s))
    {
        cout<<"stack penuh !\n";
    }
    else
    {
        s->item[s->count]=x; ++(s->count);
    }
}

int pop(stack *s)
{
    if(empty(s))
    {
        cout<<"stack kosong\n";
    }
    else
    {
        --(s->count);
        return (s->item[s->count]);
    }
}

int main()
{
    int i, n, l, z;
    int input;

    stack tumpukan;
    cout << "*********************************\n";
    cout << "NAMA   : MAULANA ABDUL SIDDIQ\n";
    cout << "NIM    : 16090112\n";
    cout << "KELAS  : 2D TEKNIK INFORMATIKA\n";
    cout << "ALGORITMA DAN STRUKTUR DATA 2\n";
    cout << "PROGRAM KONVERSI DESIMAL KE BINER\n";
    cout << "*********************************\n\n";
    inisialisasi_stack(&tumpukan);
    cout << "Masukkan Bilangan Desimal = ";
    cin >> input;

    for(z=1, n=input; n>0; n=n/2, z++)
    {
        MAXSTACK=z;
    }

    int m=0;

    for(n=input;n>0;n=n/2)
    {
        l=n%2;
        push(l,&tumpukan);
        ++m;
    }
    cout << "----------------------------" << endl;
    cout << "Bilanga Biner = ";

    for(i=MAXSTACK;i>0;i--)
    {
        cout<<pop(&tumpukan);
    }
    cout << "\n----------------------------\n";
    return 0;
}
