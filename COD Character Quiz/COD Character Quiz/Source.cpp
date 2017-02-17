#include <iostream>
using namespace std;
int main() {
	int Soap = 0;
	int Mason = 0;
	int Macorov = 0;
	int Woods = 0;
	int Reznov = 0;
	char input;
	cout << "Let's Find Out Which COD Character You Are!!" << endl << endl << endl;

	cout << "What is your favorite type of weapon? (S = Sub, A = Assault, B = Sniper, L = Launchers, I=I can care less)" << endl;
	cin >> input;
	if (input == 'S')
		Mason = Mason + 1;
	else if (input == 'A')
		Soap = Soap + 1;
	else if (input == 'B')
		Woods = Woods + 1;
	else if (input == 'L')
		Reznov = Reznov + 1;
	else if (input == 'I')
		Macorov = Macorov + 1;

	cout << "What is your favorite type of music? (M=Metal, E=EDM, R=Rock, C=Country, D=Dubstep)" << endl;
	cin >> input;
	if (input == 'M')
		Mason = Mason + 1;
	else if (input == 'E')
		Soap = Soap + 1;
	else if (input == 'R')
		Woods = Woods + 1;
	else if (input == 'C')
		Reznov = Reznov + 1;
	else if (input == 'D')
		Macorov = Macorov + 1;

	cout << "What is your favorite food? (P=pizza,C=chinese,H=hamburger,S=Steak,D=Doughnuts)" << endl;
	cin >> input;
	if (input == 'P')
		Mason = Mason + 1;
	else if (input == 'C')
		Soap = Soap + 1;
	else if (input == 'H')
		Woods = Woods + 1;
	else if (input == 'S')
		Reznov = Reznov + 1;
	else if (input == 'D')
		Macorov = Macorov + 1;

	cout << "What is your favorite Sport? (S=Soccer, F=Football, B=Baseball, R=Rugby, H=Basketball)" << endl;
	cin >> input;
	if (input == 'S')
		Mason = Mason + 1;
	else if (input == 'F')
		Soap = Soap + 1;
	else if (input == 'B')
		Woods = Woods + 1;
	else if (input == 'R')
		Reznov = Reznov + 1;
	else if (input == 'H')
		Macorov = Macorov + 1;


	cout << "What role do u play in COD? (C=Camper, S=Scout, R=Rusher, D=Defender, I=I care less)" << endl;
	cin >> input;
	if (input == 'S')
		Mason = Mason + 1;
	else if (input == 'C')
		Soap = Soap + 1;
	else if (input == 'R')
		Woods = Woods + 1;
	else if (input == 'D')
		Reznov = Reznov + 1;
	else if (input == 'I')
		Macorov = Macorov + 1;


	cout << "Which COD better? (B=Black Ops 2, A=Advanced Warfare, R=Remastered, O=Black Ops 1, I=Infinite Warfare)" << endl;
	cin >> input;
	if (input == 'B')
		Mason = Mason + 1;
	else if (input == 'A')
		Soap = Soap + 1;
	else if (input == 'R')
		Woods = Woods + 1;
	else if (input == 'O')
		Reznov = Reznov + 1;
	else if (input == 'I')
		Macorov = Macorov + 1;


	cout << "Which beverage do u prefer? (G=Gatorade, P=Powerade, E=Pepsi, M=Monster, R=Redbull)" << endl;
	cin >> input;
	if (input == 'G')
		Mason = Mason + 1;
	else if (input == 'E')
		Soap = Soap + 1;
	else if (input == 'P')
		Woods = Woods + 1;
	else if (input == 'M')
		Reznov = Reznov + 1;
	else if (input == 'R')
		Macorov = Macorov + 1;


	cout << "Which is the better Fast Food Restraunt? (M=Mc.Donalds, W=Wendys, B=Burger King, T=Taco Bell, J=Jack In The Box)" << endl;
	cin >> input;
	if (input == 'M')
		Mason = Mason + 1;
	else if (input == 'B')
		Soap = Soap + 1;
	else if (input == 'W')
		Woods = Woods + 1;
	else if (input == 'J')
		Reznov = Reznov + 1;
	else if (input == 'T')
		Macorov = Macorov + 1;


	cout << "What is your favorite thing to do after school? (S=Sports, F=Fishing, V=Video Games, R=Reading, Y=Youtube)" << endl;
	cin >> input;
	if (input == 'S')
		Mason = Mason + 1;
	else if (input == 'V')
		Soap = Soap + 1;
	else if (input == 'F')
		Woods = Woods + 1;
	else if (input == 'Y')
		Reznov = Reznov + 1;
	else if (input == 'R')
		Macorov = Macorov + 1;


	cout << "Which was your favorite year? (A=2016, B=2015, C=2014, D=2013, E=2012)" << endl;
	cin >> input;
	if (input == 'A')
		Mason = Mason + 1;
	else if (input == 'C')
		Soap = Soap + 1;
	else if (input == 'B')
		Woods = Woods + 1;
	else if (input == 'D')
		Reznov = Reznov + 1;
	else if (input == 'E')
		Macorov = Macorov + 1;

	
	
	
	
	if ((Woods > Mason) && (Woods > Reznov) && (Woods > Soap) && (Woods > Macorov))
		cout << "You Are Woods!!" << endl;
	else if ((Mason > Woods) && (Mason > Soap) && (Mason > Reznov) && (Mason > Macorov))
		cout << "You Are Mason!!" << endl;
	else if ((Soap > Mason) && (Soap > Woods) && (Soap > Reznov) && (Soap > Macorov))
		cout << "You Are Soap!!" << endl;
	else if ((Reznov > Woods) && (Reznov > Mason) && (Reznov > Soap) && (Reznov > Macorov))
		cout << "You Are Reznov!!" << endl;
	else if ((Macorov > Mason) && (Macorov > Woods) && (Macorov > Soap) && (Macorov > Reznov))
		cout << "You Are Macorov!!" << endl;
	else{
		cout << "you have a tie between two or more!" << endl;
		cout << "testing: Woods is " << Woods << " , Mason is " << Mason << " , Soap is" << Soap << " , Reznov is " << Reznov << " , and Macorov is" << Macorov << endl;
		}


}