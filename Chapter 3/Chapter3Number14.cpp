#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string month;
	int year;
	double sales;
	double county;
	double state;
	double total;
	double total2;
	
	cout << "What month is it? ";
	cin >> month;
	cout << "What year is it? ";
	cin >> year;
	cout << "How much money did you collect at the cash register? ";
	cin >> total2;
	sales=total2/1.06;
	county=sales*.02;
	state=sales*.04;
	total=county+state;
	cout << "\n\n Month:   " << month << "  " << year << endl;
	cout << "----------------------------------" << endl;
	cout << "Total Collected:           $ " << setprecision(2) << fixed << total2 << endl;
	cout << "Sales:                     $ " << setprecision(2) << fixed << sales << endl;
	cout << "County Tax:                $ " << setprecision(2) << fixed << county << endl;
	cout << "State Tax:                 $ " << setprecision(2) << fixed << state << endl;
	cout << "Total Sales Tax:           $ " << setprecision(2) << fixed << total << endl;
	return 0;
}
	
