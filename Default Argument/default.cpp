#include <iostream>
using namespace std;

//default argument {

double Luas(double p, double l,double t = 10);
//}
int main(){
cout << "Welcome to learning default argument\n";
cout << Luas(4,4,2) << "\n";
cout << Luas(4,4) << "\n";
}

double Luas(double p, double l,double t){
    return p*l*t;
}