#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double rate, payment, loan;
	int times;
	cout << "How many payments do you have to make? ";
	cin >> times;
	cout << "How much did you borrow? ";
	cin >> loan;
	cout << "What is the monthly interest rate? ";
	cin >> rate;
	payment=((rate/100)*(pow((1+(rate/100)),times)))/((pow((1+(rate/100)),times))-1)*loan;
	cout << "Loan Amount:                     " << setw(6) << "$ "<< setprecision(2) << fixed << loan << endl;
	cout << "Monthly Interest Rate:           " << setw(10)  << setprecision(2) << fixed << rate << "%" << endl;
	cout << "Number of Payments:              " << setw(8) << times << endl;
	cout << "Monthly Payment:                 " << setw(6) << "$ " << setprecision(2) << fixed << payment << endl;
	cout << "Amount Paid Back:                " << setw(6) << "$ " << setprecision(2) << fixed << payment*times << endl;
	cout << "Interest Paid:                   " << setw(6) << "$ " << setprecision(2) << fixed << payment*times-loan << endl;
	return 0;
}
