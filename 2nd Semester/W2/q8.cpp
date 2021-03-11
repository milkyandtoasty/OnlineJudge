#include <bits/stdc++.h>
using namespace std;

class bar3d
{
    public:
        int width, height, depth;
        bar3d() {
            width = height = depth = 0;
        }
        bar3d(int w, int h, int d) {
            if(min({w, h, d}) < 0 || max({w, h, d}) > 1000) {
                w = h = d = 0;
            }
            width = w;
            height = h;
            depth = d;
        }

};

