/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
void print_title(){
    cout<<"-- Tic Tac Toe -- CSIE@CGU"<<endl;
    cout<<"Player 1 (X)  -  Player 2 (O)"<<endl;
    cout<<endl;
}
void print_chessboard(char a[]){
        for(int i=0;i<9;i+=3){
            cout<<"   ▉     ▉   "<<endl;
            cout<<" "<<a[i]<<" ▉  "<<a[i+1]<<"  ▉  "<<a[i+2]<<"   "<<endl;
            cout<<"   ▉     ▉   "<<endl;
            if(i!=6){
                cout<<"■■■■■■■■■■■■■■■"<<endl;                
            }
        }
        cout<<endl;
}
void choose_number(int count,char a[]){
    int temp;
    int detect=0;
    cout<<"Player "<<count%2+1<<",請輸入『1~9』的數字：";
    cin>>temp;
    temp+=48;
    for(int i=0;i<9;i++){
        if(temp==int(a[i])){
            if(count%2==0){
                a[i]='X';
            }
            else{
                a[i]='O';
            }
            detect=1;
        }
    }
    if(detect==0){
            cout<<"請重新輸入下一步"<<endl;
            choose_number(count,a);
        }
}
int check(int count,char a[]){
    if(a[0]==a[1] && a[0]==a[2]){
        print_title();
        print_chessboard(a);
        if(a[0]=='X'){
            cout<<endl;
            cout<<"==>Player 1 win";
            return 1;
        }
        else{
            cout<<endl;
            cout<<"==>Player 2 win";
            return 1;
        }
    }
    if(a[3]==a[4] && a[3]==a[5]){
        print_title();
        print_chessboard(a);
        if(a[0]=='X'){
            cout<<endl;
            cout<<"==>Player 1 win";
            return 1;
        }
        else{
            cout<<endl;
            cout<<"==>Player 2 win";
            return 1;
        }
    }
    if(a[6]==a[7] && a[6]==a[8]){
        print_title();
        print_chessboard(a);
        if(a[0]=='X'){
            cout<<endl;
            cout<<"==>Player 1 win";
            return 1;
        }
        else{
            cout<<endl;
            cout<<"==>Player 2 win";
            return 1;
        }
    }
    if(a[0]==a[3] && a[0]==a[6]){
        print_title();
        print_chessboard(a);
        if(a[0]=='X'){
            cout<<endl;
            cout<<"==>Player 1 win";
            return 1;
        }
        else{
            cout<<endl;
            cout<<"==>Player 2 win";
            return 1;
        }
    }
    if(a[1]==a[4] && a[1]==a[7]){
        print_title();
        print_chessboard(a);
        if(a[0]=='X'){
            cout<<endl;
            cout<<"==>Player 1 win";
            return 1;
        }
        else{
            cout<<endl;
            cout<<"==>Player 2 win";
            return 1;
        }
    }
    if(a[2]==a[5] && a[2]==a[8]){
        print_title();
        print_chessboard(a);
        if(a[0]=='X'){
            cout<<endl;
            cout<<"==>Player 1 win";
            return 1;
        }
        else{
            cout<<endl;
            cout<<"==>Player 2 win";
            return 1;
        }
    }
    if(a[0]==a[4] && a[0]==a[8]){
        print_title();
        print_chessboard(a);
        if(a[0]=='X'){
            cout<<endl;
            cout<<"==>Player 1 win";
            return 1;
        }
        else{
            cout<<endl;
            cout<<"==>Player 2 win";
            return 1;
        }
    }
    if(a[2]==a[4] && a[2]==a[6]){
        print_title();
        print_chessboard(a);
        if(a[0]=='X'){
            cout<<endl;
            cout<<"==>Player 1 win";
            return 1;
        }
        else{
            cout<<endl;
            cout<<"==>Player 2 win";
            return 1;
        }
    }
    if(count==8){
        print_title();
        print_chessboard(a);
        cout<<endl;
        cout<<"==>Game Draw";
    }
    return 0;
}
class TicTacToe{
    public:
    char num_array[9];
    TicTacToe(){
        for(int i=0;i<9;i++){
            num_array[i]=i+49;
        }
    }
    void run(){
        for(int i=0;i<9;i++){
            print_title();
            print_chessboard(num_array);
            choose_number(i,num_array);
            if(check(i,num_array)==1){
                break;
            }
        }
    }
};

int main()
{
    TicTacToe game; 
    game.run();
    return 0;
}


