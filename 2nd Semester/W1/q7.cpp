#include <algorithm>

class bar3d
{
    public:
        int width, height, depth;
        bar3d(int w, int h, int d) {
            if(min({w, h, d}) < 0 || max({w, h, d}) > 1000) {
                w = 0;
                h = 0;
                d = 0;
            }
            width = w;
            height = h;
            depth = d;
        }
};
