#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double nickel=.05;
	double penny=.01;
	double quarter=.25;
	double dime=.10;
	int pennies, nickels, dimes, quarters;
	cout << "Enter the correct amount of change to get one dollar. \n";
	cout << "How many pennies? ";
	cin >>  pennies;
	cout << "How many nickels? ";
	cin >> nickels;
	cout << "How many dimes? ";
	cin >> dimes;
	cout << "How many quarters? ";
	cin >> quarters;
	if(((pennies*penny)+(nickels*nickel)+(dimes*dime)+(quarter*quarters))==1.00)
	{
		cout << "Correct! That amounts to one dollar! \n";
	}
	if(((pennies*penny)+(nickels*nickel)+(dimes*dime)+(quarter*quarters))!=1.00)
	{
		cout << "This does not amount to one dollar. \n";
		cout << "It amounts to " << setprecision(2) << fixed << ((pennies*penny)+(nickels*nickel)+(dimes*dime)+(quarter*quarters)) << endl;
	}
}
