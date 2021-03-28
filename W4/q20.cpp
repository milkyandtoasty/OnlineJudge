#include <bits/stdc++.h>

class Encode
{   
    public:
        Encode();
        Encode(std::string);
        std::string encode();
    private:
        std::string str;
};

Encode::Encode() 
{
    return;
}
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
    std::string temp_string;
    int value;
    for(int i = 0; i < this -> str.length(); i++){
        if(int(this -> str[i] < 100)) temp_string += "0";
        else if(int(this -> str[i] < 10)) temp_string += "00";
        temp_string += std::to_string(int(this -> str[i]));
    }
    return temp_string;
}
int main() {
    std::string str;
    std::getline(std::cin, str);
    Encode *code = new Encode(str);
    std::cout<<code->encode();
    return 0;
}
