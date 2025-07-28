#include <iostream>
using namespace std;


void happy(string nama,int age){
    cout << "Happy birthday " <<nama << "! \n";
    cout << "You are " << age << "years old!";
}

int main(){
    string nama = "Agus";
    int age = 22;

    happy(nama,age);
}