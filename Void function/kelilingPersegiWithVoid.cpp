#include <iostream>
using namespace std;

void opening(){
    int sisi;
    cout << "Selamat datang di program menghitung keliling persegi! \n";
    cout <<" Masukan angka sisinya: ";
    cin >> sisi;
    int hasil = sisi * 4;
    cout << "/n";
    cout << "Luas perseginya adalah : " << hasil;
}
int main(){
    opening();
}