#include <bits/stdc++.h>
using namespace std;

class bar3d
{
    public:
        float width, height, depth;
        bar3d() {
            width = height = depth = 0;
        }
        bar3d(float w, float h, float d) {
            if(min({w, h, d}) < 0 || max({w, h, d}) > 1000) {
                w = h = d = 0;
            }
            width = w;
            height = h;
            depth = d;
        }
        float getVolume() {
            return height * depth * width;
        }
        void scale(float n) {
            width = width * n;
            height =  height * n;
            depth = depth * n;
        }
        float addVolume(bar3d obj) {
            return obj.getVolume() + getVolume();
            
        }
};