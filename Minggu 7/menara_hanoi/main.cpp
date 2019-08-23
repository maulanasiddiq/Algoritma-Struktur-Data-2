#include <iostream>

using namespace std;

void hanoi(int n, char dari, char bantu, char tujuan)
{
    if(n==1)
    {
        cout << "Pindahkan kepingan dari " << dari << " ke " << tujuan << "\n";
    }
    else
    {
        hanoi(n-1, dari, tujuan, bantu);
        hanoi(1, dari, bantu, tujuan);
        hanoi(n-1, bantu, dari, tujuan);
    }
}

int main()
{
    int jum_keping;

    cout << "Teknik Hanoi Pada C++" << endl << endl;
    cout << "Masukkan Jumlah Kepingan : ";
    cin >> jum_keping;

    hanoi(jum_keping, 'A', 'B', 'C');
    return 0;
}
