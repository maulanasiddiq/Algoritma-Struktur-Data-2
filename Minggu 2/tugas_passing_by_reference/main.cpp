#include <iostream>

using namespace std;
void penjumlahan(int& x, int& y)
{
    x = 3, y = 2;
    x + y;
}

int main()
{
    int a, b;
    penjumlahan(a, b);
    cout << a + b;
    return 0;
}
