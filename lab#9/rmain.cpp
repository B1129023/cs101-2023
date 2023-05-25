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
        ifstream inputFile("main.cpp");  
        ofstream outputFile("rmain.cpp"); 
        string line;
        while (getline(inputFile, line)) {
            size_t pos = line.find(oldstring);
            while (pos != string::npos) {
                line.replace(pos, oldstring.length(), newstring);
                pos = line.find(oldstring, pos + newstring.length());
            }
            outputFile << line << endl;
        }
        inputFile.close();
        outputFile.close();
    }
    
};

int main()
{
    ReplaceMyString my;
    my.replaceString("IU is best","IU is best is best");
    return 0;
}


