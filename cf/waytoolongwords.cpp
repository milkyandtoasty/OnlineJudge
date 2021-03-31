#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
        string str;
        cin >> str;
        if(str.length() > 10)
        {
            cout << str.front()+to_string(str.length()-2)+str.back() << endl;
        }
        else
        {
            cout << str << endl;
        }
    }








    return 0;
}