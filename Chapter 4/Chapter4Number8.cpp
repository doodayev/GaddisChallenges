#include <iostream>
#include <string>
using namespace std;
int main()
{
	string choice1;
	string choice2;
	cout << "Enter a color that's red, yellow, or blue \n";
	cin >> choice1;
	cout << "Enter another color that's red, yellow, or blue \n";
	cin >> choice2;
	
	if ((choice1=="blue" || choice1=="Blue" || choice1=="BLUE") && (choice2=="blue" || choice2=="Blue" || choice2=="BLUE"))
	{
		cout << "When you mix these two together you get blue! \n";
	}
	if ((choice1=="blue" || choice1=="Blue" || choice1=="BLUE") && (choice2=="red" || choice2=="Red" || choice2=="RED"))
	{
		cout << "When you mix these two together you get purple! \n";
	}
	if ((choice2=="blue" || choice2=="Blue" || choice2=="BLUE") && (choice1=="red" || choice1=="Red" || choice1=="RED"))
	{
		cout << "When you mix these two together you get purple! \n";
	}
	if ((choice1=="blue" || choice1=="Blue" || choice1=="BLUE") && (choice2=="yellow" || choice2=="Yellow" || choice2=="YELLOW"))
	{
		cout << "When you mix these two together you get green! \n";
	}
	if ((choice2=="blue" || choice2=="Blue" || choice2=="BLUE") && (choice1=="yellow" || choice1=="Yellow" || choice1=="YELLOW"))
	{
		cout << "When you mix these two together you get green! \n";
	}
	if ((choice1=="Red" || choice1=="red" || choice1=="RED") && (choice2=="yellow" || choice2=="Yellow" || choice2=="YELLOW"))
	{
		cout << "When you mix these two together you get orange! \n";
	}
	if ((choice2=="Red" || choice2=="red" || choice2=="RED") && (choice1=="yellow" || choice1=="Yellow" || choice1=="YELLOW"))
	{
		cout << "When you mix these two together you get orange! \n";
	}
	if ((choice1=="Red" || choice1=="red" || choice1=="RED") && (choice2=="Red" || choice2=="red" || choice2=="RED"))
	{
		cout << "When you mix these two together you get red! \n";
	}
	if ((choice1=="yellow" || choice1=="Yellow" || choice1=="YELLOW") && (choice2=="yellow" || choice2=="Yellow" || choice2=="YELLOW"))
	{
		cout << "When you mix these two together you get yellow! \n";
	}
}
