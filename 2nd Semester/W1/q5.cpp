#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i;
    cin >> i;
    cout << ((i & 1) ? i-1 : i);
    return 0;
}