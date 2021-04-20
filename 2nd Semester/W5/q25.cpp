#include <bits/stdc++.h>
class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int, int);
    int getNumerator() const;
    int getDenominator() const;
    void setNumerator(int);
    void setDenominator(int);
    void display();
    void simplify();
    Fraction operator +(const Fraction &f);
    Fraction operator -(const Fraction &f);
    Fraction operator *(const Fraction &f);
    Fraction operator /(const Fraction &f);
    Fraction operator !();
    friend std::ostream &operator<<(std::ostream &, const Fraction &);
};

Fraction::Fraction()
{
    this->numerator = 0;
    this->denominator = 0;
}

Fraction::Fraction(int a, int b)
{
    this->numerator = a;
    this->denominator = b;
}

int Fraction::getNumerator() const
{
    return this->numerator;
}

int Fraction::getDenominator() const
{
    return this->denominator;
}
void Fraction::setDenominator(int a)
{
    this->denominator = a;
}

void Fraction::setNumerator(int a)
{
    this->numerator = a;
}

void Fraction::simplify()
{
    //* get the GCD of the function and divide both
    int gcd = std::__gcd(this->numerator, this->denominator);
    this->numerator /= gcd;
    this->denominator /= gcd;
}
void Fraction::display()
{
    simplify();
    if (this->denominator == 1)
    {
        std::cout << "(" << this->numerator << ")";
        return;
    }
    std::cout << "(" << this->numerator << "/" << this->denominator << ")";
}

//* function overloading

Fraction Fraction::operator +(const Fraction &f)
{
    int Num = this->getNumerator() * f.getDenominator() + f.getNumerator() * this->getDenominator();
    int Den = this->getDenominator() * f.getDenominator();
    Fraction Frac(Num, Den);
    return Frac;
}

Fraction Fraction::operator -(const Fraction &f)
{
    int Num = this->getNumerator() * f.getDenominator() - f.getNumerator() * this->getDenominator();
    int Den = this->getDenominator() * f.getDenominator();
    Fraction Frac(Num, Den);
    return Frac;
}

Fraction Fraction::operator *(const Fraction &f)
{
    int Num = this->getNumerator() * f.getNumerator();
    int Den = this->getDenominator() * f.getDenominator();
    Fraction Frac(Num, Den);
    return Frac;
}

Fraction Fraction::operator /(const Fraction &f)
{
    int Num = this->getNumerator() * f.getDenominator();
    int Den = this->getDenominator() * f.getNumerator();
    Fraction Frac(Num, Den);
    return Frac;
}

std::ostream &operator<<(std::ostream &os, const Fraction &f)
{
    Fraction Frac(f.getNumerator(), f.getDenominator());
    Frac.simplify();
    if (Frac.getDenominator() == 1)
    {
        os <<"("<<Frac.getNumerator()<<")";
        return os;
    }
    os << "(" << Frac.getNumerator() << "/" << Frac.getDenominator() << ")";
    return os;
}

Fraction Fraction::operator !() {
    Fraction Frac(this->getDenominator(), this->getNumerator());
    return Frac;
}