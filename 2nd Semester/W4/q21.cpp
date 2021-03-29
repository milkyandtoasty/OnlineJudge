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
    //*will give a string of numbers and decode it
    //*just reverse the process of the encode function
    //TODO Convert ASCII to Char and append string and return;
    std::string decoded;
    for(int i = 0; i < this->str.length(); i+=3)
    {
        int j = 0;
        while(str[i] == '0')
        {
            j++, i++;
        }
        //TODO transform the substring to a Char from the ASCII value
        // std::string sub_str = (this -> str.substr(i, 3-j));
        // int num = stoi(sub_str);
        // decoded += char(num);
        decoded += char(stoi((this -> str.substr(i, 3-j))));
        i -= j;
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
