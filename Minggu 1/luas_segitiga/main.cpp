#include <iostream>

using namespace std;
void luas_segitiga(float a, float t)
{
    cout << "Masukan alas segitiga : ";
    cin >> a;
    cout << "Masukan tinggi segitiga : ";
    cin >> t;
    cout << 0.5*a*t;
}
int main()
{
    float a, t;
    luas_segitiga(a,t);
    return 0;
}
