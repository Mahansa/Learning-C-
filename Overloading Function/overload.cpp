#include <iostream>
using namespace std;
//Normal function
int Luas(int p,int l){
return p*l;
}
//overloading Function
int Luas(int p){
    int l;
    l = p*p;
    return l;
}


int main(){
    cout << Luas(2,3) << "\n"
    cout << Luas(2) << "\n";;
    cout << Luas(2.5);
}