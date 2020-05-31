#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double pi=3.14159;
	double diameter;
	double slices;
	double OneSlice=14.125;
	double area;
	double areaPizza;
	int Pizzas;
	double Pizzas2;
	int people;
	
	cout << "How many people will be attending your party? ";
	cin >> people;
	cout << "What will be the diameter of the pizzas? ";
	cin >> diameter;
	area=people*4*OneSlice;
	areaPizza=(diameter/2)*(diameter/2)*pi;
	Pizzas=area/areaPizza+1;
	Pizzas2=area/areaPizza;
	cout << "You're going to need " << Pizzas << " pizzas. \n";
	cout << "You can't order " << Pizzas2 << "  pizzas so don't ask why this program will add an 'extra' pizza. \n";
	return 0;
}
	
