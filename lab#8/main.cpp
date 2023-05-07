/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Fueltank{
    private:
        int m_FueltankCapacity;
        int m_Gas_grade;
    public:
        Fueltank(int FueltankCapacity=3000, int Gas=98){
            m_FueltankCapacity=FueltankCapacity;
            m_Gas_grade=Gas;
        }
        int fuel_up(int v,int gas){
            if(v>m_FueltankCapacity && gas!=m_Gas_grade){
                cout<<"Error: FueltankCapacity: "<<m_FueltankCapacity<<"but fuel up: "<<v<<endl;
                cout<<"Error: Gas_grade: "<<gas<<"Correct Gas_grade: "<<m_Gas_grade<<endl;
            }
            else if(v>m_FueltankCapacity){
                cout<<"Error: FueltankCapacity: "<<m_FueltankCapacity<<"but fuel up: "<<v<<endl;
                cout<<"fuel_up: "<<v<<" Gas_grade: "<<gas<<endl;
            }
            else if(gas!=m_Gas_grade){
                cout<<"Error: Gas_grade: "<<gas<<"Correct Gas_grade: "<<m_Gas_grade<<endl;
            }    
            else{
                cout<<"fuel_up: "<<v<<" Gas_grade: "<<gas<<endl;
            }
            return 0;
        }
        int set_Gas_grade(int Gas_grade){
            m_Gas_grade=Gas_grade;
            cout<<"Set Gas_grade = "<<m_Gas_grade;
            return 0;
        }
        int get_Gas_grade(){
            return m_Gas_grade;
        }
};
class Engine{
    private:
        int m_EngineCapcity;
        int m_Horsepower;
        bool m_EngineRunning;
    public:
        Engine(int EngineCapcity=2000,int Horsepower=200){
            m_EngineCapcity=EngineCapcity;
            m_Horsepower=Horsepower;
        }
        bool EngineStart(){
            if(!m_EngineRunning){
                m_EngineRunning=true;
            }
            return true;
        }
        bool EngineStop(){
            if(!m_EngineRunning){
                m_EngineRunning=false;
            }
            return true;
        }
        bool get_EngineStatus(){
            return m_EngineRunning;
        }
};
class Car{
    protected:
        string m_DriveMode;
    private:
        Engine m_Engine;
        Fueltank m_Fueltank;
        int m_MaxSeating;
        int m_price;
        int m_base;
        string m_brand;
        string m_model;
        int m_year;
        void m_UpdatePrice(int base=500000){
            m_price=500000;
        }
    public:
        Car(string x,string y,int z,int s){
            m_brand=x;
            m_model=y;
            m_year=z;
            m_MaxSeating=s;
        }
        int get_MaxSeating(){
            return m_MaxSeating;
        }
        int get_price(){
            return m_price;
        }
        void set_base(int n){
            m_base=n;
        }
        string get_brand(){
            return m_brand;
        }
        bool get_EngineStatus(){
            return m_Engine.get_EngineStatus();
        }
        bool startEngine(){
            return m_Engine.EngineStart();
        }
        bool stopEngine(){
            return m_Engine.EngineStop();
        }
        string get_DriveMode(){
            return m_DriveMode;
        }
        int fuel_up(int v,int gas){
            return m_Fueltank.fuel_up(v,gas);
        }
        int set_Gas_grade(int Gas_grade){
            return m_Fueltank.set_Gas_grade(Gas_grade);
        }
        int get_Gas_grade(){
            return m_Fueltank.get_Gas_grade();
        }
};
class BMW_Car:public Car{
    public:
    BMW_Car(string y,int z,int s):Car("BMW",y,z,s){
        cout<<"Constructing BMW_Car\n";
        m_DriveMode="Rear-wheel";
    }
    
};
class AUDI_Car:public Car{
    public:
    AUDI_Car(string y,int z,int s):Car("AUDI",y,z,s){
        cout<<"Constructing AUDI_Car\n";
        m_DriveMode="Front-wheel";
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};
class BENZ_Car:public Car{
    public:
    BENZ_Car(string y,int z,int s):Car("BENZ",y,z,s){
        cout<<"Constructing BENZ_Car\n";
        m_DriveMode="Front-wheel";
    }
    string get_DriveMode(){
        return m_DriveMode;
    }
};
int main()
{
    AUDI_Car car_2("A1",2021,2);
    cout<<car_2.get_brand()<<"Gas_grade = "<<car_2.get_Gas_grade()<<endl;
    car_2.set_Gas_grade(95);
    cout<<car_2.get_brand()<<"Gas_grade = "<<car_2.get_Gas_grade()<<endl;
    car_2.fuel_up(300, 95);
    return 0;
}

