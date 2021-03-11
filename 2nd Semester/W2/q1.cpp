#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a + b << endl;
    cout << a << "-" << b << "=" << a - b << endl;
    cout << a << "*" << b << "=" << a * b << endl;
    cout << a << "/" << b << "=" << fixed << setprecision(4) << (float)a / (float)b << endl;
    cout.unsetf(ios::fixed);
    cout << a << "%" << b << "=" << a % b << endl;








    return 0;
}