#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s, dif, n;
    cin >> s >> dif >> n;
    for(unsigned int i = 0; i < n; i++) {
        cout << "a[" << i+1 << "]=" << s+(i*dif) << '\n';

    }









    return 0;
}