#include <bits/stdc++.h>
using namespace std;


int fact(int n) {
    int f = 1;
    for(int i = 1; i<= n; i++){
        f *= i;
    }
    return f;
}
int combi(int a, int b) {
    return (fact(a) / (fact(a-b) * fact(b)));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << ' ';
        for(int j = 1; j <= n-i-1; j++) {
            cout << "  ";
        }
        
        for(int j = 0; j <= i; j++) {
            cout << combi(i, j);
            if(j != i) {
                cout<< setw(2)<< "   ";
            }
        }
        cout << endl;   
    }

    return 0;
}         
