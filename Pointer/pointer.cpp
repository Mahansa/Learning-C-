#include <iostream>
using namespace std;

int main(){
    string food = "Martabak";
    string* ptr = &food;

    cout << ptr << "\n";
    cout << *ptr << "\n";
}