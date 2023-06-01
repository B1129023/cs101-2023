/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class ReplaceMyString{
    public:
    string OldString;
    string NewString;
    ReplaceMyString(){}
    void replaceString(const string oldstring,const string newstring){
        ifstream in;
        ofstream out;
        in.open("main.cpp");
        out.open("rmain.cpp");
        int len=oldstring.length();
        string line;
        while (getline(in, line)) {
            size_t pos = line.find(oldstring);
            if(pos>100){
                out<<line<<endl;
                continue;
            }
            line.replace(pos, len, newstring);
            out << line << endl;
        }
        in.close();
        out.close();
    }
    
};

int main()
{
    ReplaceMyString my;
    my.replaceString("IU","IU is best");
    return 0;
}

