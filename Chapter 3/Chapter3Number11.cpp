#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double loan, insurance, gas, oil, tires, maintenance;
	cout << "How much money do you spend on your loans per month? ";
	cin >> loan;
	cout << "How much money do you spend on your insurance per month? ";
	cin >> insurance;
	cout << "How much money do you spend on gas  per month? ";
	cin >> gas;
	cout << "How much money do you spend on oil  per month? ";
	cin >> oil;
	cout << "How much money do you spend on your tires per month? ";
	cin >> tires;
	cout << "How much money do you spend on maintenance per month? ";
	cin >> maintenance;
	double total=loan+insurance+gas+oil+tires+maintenance;
	cout << "You spend $" << setprecision(2) << fixed << total << " per month on your automotible.\n";
	cout << "And you spend $" << setprecision(2) <<fixed << total*12 << " per year on your automobile.\n";
	return 0;
}
