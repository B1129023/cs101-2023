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
    ReplaceMyString(){
        ifstream inputFile("main.cpp");  
        ofstream outputFile("rmain.cpp"); 
        char c;
        while (inputFile.get(c) && c != EOF) {
            outputFile.put(c);
        }
        
        inputFile.close();
        outputFile.close();
    }
    void replaceString(string oldstring,string newstring){
        
    }
    
};

int main()
{
    ReplaceMyString my;
    my.replaceString("IU","IU is best");
    return 0;
}


