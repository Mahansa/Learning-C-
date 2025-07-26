#include <iostream>

//int main(){
//	std::string mobil[] = {"Toyota","Daihatsu","Suzuki","Ford","BMW"};
//	std::cout << "ini adalah dealer mobil "<<mobil[0] << "\n";
//	std::cout << "ini adalah dealer mobil "<<mobil[1]<< "\n";
//	std::cout << "ini adalah dealer mobil "<<mobil[2]<< "\n";
//	std::cout << "ini adalah dealer mobil "<<mobil[3]<< "\n";
//	std::cout << "ini adalah dealer mobil "<<mobil[4]<< "\n";
//}

int main(){
	std::string mobil[5];
	std::string favorit;
	mobil[0] = "Toyota";
	mobil[1] = "Daihatsu";
	mobil[2] = "Suzuki";
	mobil[3] = "Ford";
	mobil[4] = "BMW";
	std::cout << "ini adalah dealer mobil "<<mobil[0] << "\n";
	std::cout << "ini adalah dealer mobil "<<mobil[1] << "\n";
	std::cout << "ini adalah dealer mobil "<<mobil[2] << "\n";
	std::cout << "ini adalah dealer mobil "<<mobil[3] << "\n";
	std::cout << "ini adalah dealer mobil "<<mobil[4] << "\n";
	std::cout << "Mobil mana yang palin anda suka\t?";
	std::cin >> favorit;
	if(favorit == "Daihatsu"){
		std::cout << "Mobil sejuta umat";
	}else if(favorit == "Toyota"){
		std::cout <<"Selera anda bagus juga ya!";
	}else if(favorit == "Suzuki"){
		std::cout << "Oke juga";
	}else if(favorit == "Ford"){
		std::cout << "Wow amazing man";
	}else if(favorit == "BMW"){
		std::cout << "Wah kesukaan ku juga itu man";
	}else{
		std::cout << "GOOD";
	}
}
