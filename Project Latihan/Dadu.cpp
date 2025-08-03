#include <iostream>
#include <cstdlib>
#include <ctime>// Random number srand

using namespace std;

int main(){
    string dadu;
    srand(time(0)); // <---- buat yang ini 

    cout << "Selamat datang di lempar dadu \n";
    cout << "Ketik lempar untuk memulai : ";
    cin >> dadu;
    if(dadu == "lempar"){
       cout << "\t Selamat kamu mendapat angka: " << rand() % 6 << endl;
    }else{
        cout << "Oke lain kali ya Bye!";
    }

}