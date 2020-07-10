#include <iostream>
using namespace std;
int main()
{
	int month;
	int day;
	int year;
	cout << "Enter the number of the month ";
	cin >> month;
	cout << "Enter the number of the day ";
	cin >> day;
	cout << "Enter the two digit number of the year ";
	cin >> year;
	
	if(month*day==year)
	{
		cout << "This is a magic date! \n";
	}
	
	if(month*day!=year)
	{
		cout << "This is not a magic date. \n";
	}
	
	return 0;
}
	
