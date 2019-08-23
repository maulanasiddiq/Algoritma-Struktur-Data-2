#include <iostream>

using namespace std;

void pass_reference2(int& x){
x = 100;
}

int main()
{
    int y = 50;
    pass_reference2(y);
    cout << y; // x berubah menjadi = 20
    return 0;
}
