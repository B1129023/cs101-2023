#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class myString{
    private:
    string m_str;
    public:
    myString(string s){
        m_str=s;
    }
};
class ReadClass {
    public:
    int count=0;
    
    void show(){
        ifstream in;
        string line;
        in.open("main.cpp");
        while(getline(in,line)){
            size_t pos=line.find("class");
            size_t pos2=line.find("{");
            if(pos==0){
                count++;
            }
        }
        cout<<count<<" class in main.cpp"<<endl;
        in.close();
        
        in.open("main.cpp");
        while(getline(in,line)){
            size_t pos=line.find("class");
            size_t pos2=line.find("{");    
            if(pos==0){    
                line.replace(pos2,2,"");
                cout<<line<<endl;
            }    
        }
        in.close();
    }
};

int main()
{
    ReadClass rfile;
    rfile.show();
    return 0;
}




