#include <iostream>
using namespace std;

int main()
{
	int gallons;
	int miles;
	cout << "How many gallons of gas can the car hold? \n";
	cin >> gallons;
	while(gallons<=0)
	{
		cout << "No numbers less than or equal to zero allowed \n";
		cout << "Enter a new number.\n";
		cin >> gallons;
	} 
	cout << "How many miles can the car go?" << endl;
	cin >> miles;
	while(miles<=0)
	{
	 cout << "No numbers less than or equal to zero allowed \n";
		cout << "Enter a new number.\n";
		cin >> miles;
	}
	double mpg=miles/gallons;
	cout << "Your car can do " << mpg << " miles per gallon. \n";
}
