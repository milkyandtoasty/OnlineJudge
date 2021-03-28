#include <bits/stdc++.h>

class Digit
{
    public:
        Digit();
        Digit(int);
        int num;
        void setDigit(int);
        int getDigit();
}; 

Digit::Digit() {
    num = 0;
}

Digit::Digit(int i) {
    num = i < 10 && i > 0 ? i : 0;
}

void Digit::setDigit(int i) {
    num = i < 10 && i > 0 ? i : 0;
}

int Digit::getDigit() {
    return num;
}