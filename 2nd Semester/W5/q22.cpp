#include <bits/stdc++.h>
class Fraction
{
    private:
        int numerator;
        int denominator;
    public:
        Fraction();
        Fraction(int, int);
        int getNumerator();
        int getDenominator();
        void setNumerator(int);
        void setDenominator(int);
        void display();
};

Fraction::Fraction() {
    this -> numerator = 0;
    this -> denominator = 0;
}

Fraction::Fraction(int a, int b) {
    this -> numerator = a;
    this -> denominator = b;
}

int Fraction::getNumerator() {
    return this -> numerator;   
}

int Fraction::getDenominator() {
    return this -> denominator;
}

void Fraction::setDenominator(int a) {
    this -> denominator = a;
}

void Fraction::setNumerator(int a) {
    this -> numerator = a;
}

void Fraction::display() {
    int num = this -> numerator, den = this -> denominator;
    int gcd = std::__gcd(num, den);
    num/=gcd;
    den/=gcd;
    if(den == 1) {
        std::cout << num;
        return;
    }
    std::cout << "(" << num << "/" << den << ")";
    
}

int main() {
    Fraction f;
    f.display();
}