#include <bits/stdc++.h>


class Decode
{
    public:
        Decode();
        Decode(std::string);
        std::string decode();
    private:
        std::string str;
};

Decode::Decode(std::string str)
{
    this -> str = str;
}

std::string Decode::decode()
{

    std::string decoded;
    for(int i = 0; i < this->str.length(); i+=3)
    {
        decoded += char(stoi((this -> str.substr(i, 3))));
    }   

    return decoded;
}
int main() {
    std::string str;
    std::cin>>str;
    Decode *code = new Decode(str);
    std::cout<<code->decode();
    return 0;
}
