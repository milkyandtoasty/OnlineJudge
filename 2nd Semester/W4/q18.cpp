#include <bits/stdc++.h>

class Digit
{
    public:
        Digit();
        Digit(int);
        void setDigit(int);
        int getDigit();
    private:
        int num;
}; 

class IntNumber
{
    public:
        IntNumber();
        IntNumber(char* str);
        void display();
    private:
        Digit digit[1000];
        bool positive = false;
        bool negative = false;
        int m_available_digits;
        //* m_available_digits is the number of digits in the digit array;
};

IntNumber::IntNumber()
{   

}

IntNumber::IntNumber(char* str)
{
    std::string number(str);
    m_available_digits = 0;
    int zero_index = 0, i = 0;
    bool started = false;

    //* check if there is a sign in the front '+' '-'
    switch(number[0]){
        case '+':
            this -> positive++;
            i++;
            break;
        case '-':
            this -> negative++;
            i++;
            break;
    }
    //* goes through the string and put each one to the digit array
    for(int j = 0; i < number.length(); i++, j++)
    {   
        if(std::isalpha(number[i])) 
        {
            return;
        }
        if(number[i] == '0' && !started) 
        {
            zero_index++;
            continue;
        }
        started++;
        this -> digit[j-zero_index].setDigit(number[i] - '0');
        this -> m_available_digits++;
    }
}
//* make a var starting the i index till 0 is not found 
void IntNumber::display()
{
    if(m_available_digits == 0) {
        std::cout << 0;
        return;
    }
    if(negative) std::cout << '-';
    for(int i = 0; i < m_available_digits; i++) {
        std::cout << digit[i].getDigit();
    }

}
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
int main()
{
    char num[10000];
    std::cin>>num;
    IntNumber *number = new IntNumber(num);
    number->display();
    return 0;
}
