#include<iostream>
using namespace std;
void oddeven(int x,int y){
    while (x  < 10000 && y < 10000){
        cout << "Odd nums :"<< x <<endl;
        x+=2;
        cout << "Even nums :"<< y << endl;
        y+=2;

    }
}
int main (){
    int x = 1;
    int y = 2;
    oddeven(x,y);
    return 0 ;
}
