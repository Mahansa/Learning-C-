#include <iostream>
#include <string>

using namespace std;

void deposit();
void withdraw();
string landpage();
int balance = 0;

int main(){
string sistem;

   while (true) { 
        sistem = landpage();  
        if (sistem == "Deposit" or sistem == "deposit") {
            deposit();
        } else if (sistem == "Withdraw" or sistem == "withdraw") {
            withdraw();
        } else if (sistem == "Exit" or sistem == "exit") {
            cout << "Thank you for using Ado Bank. Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
string landpage(){
  
    cout << "********************************\n";
    cout << "Welcome to Ado bank\n";
    cout << "Deposit\n";
    cout << "Withdraw\n";
    cout << "Balance : " << balance << "\n";
    cout << "********************************\n";
    string choice;
    cin >> choice;
    return choice;
}
void deposit(){
    int ammount;
    cout << "type your ammount : ";
    cin >> ammount;
    balance += ammount;
    cout << "Deposit successful. New balance: " << balance << "\n";
}

void withdraw(){
    int ammount;
    cout << "type your ammount : ";
    cin >> ammount;
    balance -= ammount;
    cout << "Deposit successful. New balance: " << balance << "\n";
}