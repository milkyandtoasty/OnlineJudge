#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>> str;
    reverse(str.begin(), str.end());
    for (auto & x: str) x = (char)toupper(x);
    cout << str;








    return 0;
}