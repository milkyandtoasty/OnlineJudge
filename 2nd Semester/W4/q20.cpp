#include <bits/stdc++.h>

class Encode
{   
    public:
        Encode();
        Encode(std::string);
        std::string encode();
        std::string decode();
    private:
        std::string str;
};

Encode::Encode(std::string str)
{
    this -> str = str;
}

std::string Encode::encode()
{
    //* change the string to ascii value;
    //* put zero in front of the ascii value if it's less that 3 digits;
    //* example H = 072, l = 108
    //* just appending the string to the string in a for loop
    std::string encoded;
    int value;
    for(int i = 0; i < this -> str.length(); i++){
        if(int(this -> str[i] < 100)) encoded += "0";
        if(int(this -> str[i] < 10)) encoded += "0";
        encoded += std::to_string(int(this -> str[i]));
    }
    return encoded;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    Encode *code = new Encode(str);
    std::cout<<code->encode();
    return 0;
}
