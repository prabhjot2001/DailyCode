#include <iostream>
#include <cmath>
using namespace std;
unsigned long long fibonnaci(int n)
{
    const double phi = (1 + sqrt(5)) / 2;
    const double psi = (1 - sqrt(5)) / 2;

    return round((pow(phi, n) - pow(psi, n)) / sqrt(5));
}
int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "please enter a non negative value" << endl;
    }
    else
    {
        unsigned long long ans = fibonnaci(n);
        cout << ans << endl;
    }
}