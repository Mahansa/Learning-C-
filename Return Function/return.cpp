#include <iostream>
using namespace std;


int contoh(int x){
    int y;
    y = x * x;
    return y;
}



int main(){
    int input;
    cout << "Masukan angka akar kuadrat dari: ";
    cin >> input;
    cout << "\n"<< contoh(input);
    return 0;
}