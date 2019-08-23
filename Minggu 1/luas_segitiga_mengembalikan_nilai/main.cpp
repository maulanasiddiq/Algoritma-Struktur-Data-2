#include <iostream>

using namespace std;
double luas(double a,double t)
{
    double luas;
    /*cout << "Masukan alas segitiga : ";
    cin >> a;
    cout << "Masukan tinggi segitiga : ";
    cin >> t;*/
    luas = a*t/2;
    return luas;
}
int main()
{
    double a, t;
    cout << luas(20,10);
    cout << luas(50,25);
    return 0;
}
