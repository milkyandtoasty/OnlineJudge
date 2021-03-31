#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, result = 0;
    
    cin>>n;
    while(n--)
    {
        int r = 0, t, k = 3;
        while(k--)
        {
            cin >> t;
            r += t;
        }
        if(r >= 2)
        {
            result++;
        }
    }
    cout << result;







    return 0;
}