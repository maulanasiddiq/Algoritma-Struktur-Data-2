#include <iostream>
#include <cstring>
#define MAX_STACK 100

using namespace std;

struct element
{
    char huruf;
};

void initialize(int *top)
{
    *top=-1;
}

int isFull(int top)
{
    return (top==MAX_STACK-1);
}

int isEmpty(int top)
{
    return (top==-1);
}

void push(int *top,element stack[],element item)
{
    if(!isFull(*top))
    {
        stack[++(*top)]=item;
    }
}

element pop(int *top,element stack[])
{
    if(!isEmpty(*top))
    {
        return stack[(*top)--];
    }
}

int main()
{
    element tumpukan[MAX_STACK],item;
    int top,strln;
    bool palindrom=true;
    char str[MAX_STACK];

    initialize(&top);

    cout << "******************************\n";
    cout << "NAMA   : MAULANA ABDUL SIDDIQ\n";
    cout << "NIM    : 16090112\n";
    cout << "KELAS  : 2D TEKNIK INFORMATIKA\n";
    cout << "ALGORITMA DAN STRUKTUR DATA 2\n";
    cout << "PROGRAM KATA/KALIMAT PALINDROM\n";
    cout << "******************************\n\n";

    cout << "Masukkan Kata/Kalimat : ";
    cin.getline(str,sizeof(str)-1);

    strln=strlen(str);

    for(int i=0;i<=strln-1;i++)
    {
        item.huruf=str[i];
        push(&top,tumpukan,item);
    }

    cout << "\nIsi data pada stack : ";

    for(int i=0;i<=strln;i++)
    {
        item=pop(&top,tumpukan);
        cout << item.huruf;
        if(item.huruf!=str[i])
        {
            palindrom=false;
        }
    }
    cout << endl;
    cout << "------------------------------------------";
    if(palindrom==true)
    {
        cout << "\nKata/Kalimat '"<<str<<"' Merupakan Palindrom." << endl;
    }
    else
    {
        cout << "\nKata/Kalimat '" <<str<< "' Bukan Palindrom." << endl;
    }
    cout << "------------------------------------------";
}
