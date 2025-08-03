#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;
void blackjack();
void coinFlip();

    void repeat(){
   string acc;
    string jawab;
    cout << "--------------------------Welcome to Cesar casino !-------------------\n";
    cout << "Pilih permainan : ";
    cout <<  "\n";  
    cout << "Blackjack\n";
    cout << "CoinFlip\n";
    cout << "-------> ";
    cin >> jawab;
    if (jawab == "Blackjack"){
        blackjack();
    }else if(jawab == "CoinFlip"){
    	coinFlip();
	}else{
		cout << "Game you type doesn't exits";
        cin >> acc;
	}
    }
   void blackjack() {
    srand(time(0));
    string acc;
    vector<int> playerCards;
    vector<int> dealerCards;

    
    playerCards.push_back(rand() % 10 + 1);
    playerCards.push_back(rand() % 10 + 1);
    dealerCards.push_back(rand() % 10 + 1);
    dealerCards.push_back(rand() % 10 + 1);

    string action;
    int playerTotal = playerCards[0] + playerCards[1];
    int dealerTotal = dealerCards[0] + dealerCards[1];

    cout << "You chose Blackjack!\n\n";
    cout << "Your cards: " << playerCards[0] << " & " << playerCards[1] << " (Total: " << playerTotal << ")\n";
    cout << "Dealer shows: " << dealerCards[0] << " & [?]\n";

   
    while (true) {
        if (playerTotal > 21) {
            cout << "You bust! (Total: " << playerTotal << ")\nDealer wins!\n";
            return;
        }

        cout << "Hit or Stand? ";
        cin >> action;

        if (action == "Hit" || action == "hit") {
            int newCard = rand() % 10 + 1;
            playerCards.push_back(newCard);
            playerTotal += newCard;
            cout << "You drew: " << newCard << " (Total: " << playerTotal << ")\n";
        } else if (action == "Stand" || action == "stand") {
            break;
        } else {
            cout << "Invalid input. Please type Hit or Stand.\n";
        }
    }

    
    cout << "\nDealer's turn...\n";
    cout << "Dealer cards: ";
    for (int card : dealerCards) cout << card << " ";
    cout << "(Total: " << dealerTotal << ")\n";

    while (dealerTotal < 17) {
        int newCard = rand() % 10 + 1;
        dealerCards.push_back(newCard);
        dealerTotal += newCard;
        cout << "Dealer drew: " << newCard << " (Total: " << dealerTotal << ")\n";
    }


    if (dealerTotal > 21) {
        cout << "Dealer busts! You win!\n";
        cin >> acc;
        repeat();
    } else if (playerTotal > dealerTotal) {
        cout << "You win!\n";
        cin >> acc;
        repeat();
    } else if (playerTotal == dealerTotal) {
        cout << "Draw!\n";
        cin >> acc;
        repeat();
    } else {
        cout << "Dealer wins!\n";
        cin >> acc;
        repeat();
    }
}

 
 void coinFlip (){
	string pilih;
    string acc;
	int coin = rand() % 2;
	cout << "You chose CoinFlip !\n\n\n";
	cout << "Pick your side Head or Tails\n";
	cout << "Your choise : ";
	cin >> pilih;
	cout << "\n";
    string result = (coin == 0) ? "Head" : "Tails";
    cout << "Coin result: " << result << "\n";
	if(pilih == "Head"){
		cout << "You win !";
        cin >> acc;
        repeat();
	}else if(pilih == "Tails"){
		cout << "You win !";
        cin >> acc;
        repeat();
	}
 }


int main(){
    string acc;
    string jawab;
    cout << "--------------------------Welcome to Cesar casino !-------------------\n";
    cout << "Pilih permainan : ";
    cout <<  "\n";  
    cout << "Blackjack\n";
    cout << "CoinFlip\n";
    cout << "-------> ";
    cin >> jawab;
    if (jawab == "Blackjack"){
        blackjack();
    }else if(jawab == "CoinFlip"){
    	coinFlip();
	}else{
		cout << "Game you type doesn't exits";
        cin >> acc;
	}
}
