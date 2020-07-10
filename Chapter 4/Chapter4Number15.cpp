#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double weight;
	int miles;
	double cost;
	cout << "How much does the package weigh? ";
	cin >> weight;
	if(weight<0)
	{
		cout << "STOP BREAKING THE LAWS OF PHYSICS! \n";
		return 0;
	}
	if(weight>20)
	{
		cout << "Too heavy. We only ship up to 20kg. \n";
		return 0;
	}
	cout << "How far do you want to take this package? (miles)";
	cin >> miles;
	if(miles<10)
	{
		cout << "This distance is too short. Must be 10 miles or more. \n";
		return 0;
	}
	if(miles>3000)
	{
		cout << "This distance is too far. Must not be greater than 3000 miles. \n";
		return 0;
	}
	if (weight<=2)
	{
		cost=(miles*1.10)/500;
		cout << "The postage costs $" << setprecision(2) << fixed << cost << endl; 
	}
	if (weight>2 && weight<=6)
	{
		cost=(miles*2.20)/500;
		cout << "The postage costs $" << setprecision(2) << fixed << cost << endl; 
	}
	if (weight>6 && weight<=10)
	{
		cost=(miles*3.70)/500;
		cout << "The postage costs $" << setprecision(2) << fixed << cost << endl; 
	}
	if (weight>10 && weight<=20)
	{
		cost=(miles*4.80)/500;
		cout << "The postage costs $" << setprecision(2) << fixed << cost << endl; 
	}
}
