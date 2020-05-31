#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double amount, principal, rate, compounded, interest;
	cout << "What's the principal? ";
	cin >> principal;
	cout << "What's the interest rate? ";
	cin >> rate;
	cout << "How many times is interest compounded? ";
	cin >> compounded;
	cout << " Interest Rate:            " << rate << "%\n";
	cout << " Times Compounded:         " << compounded << endl;
	cout << " Principal:              $ " << setprecision(2) << fixed << principal << endl;
	interest=principal*(pow((1+(rate/compounded)/100),compounded))-principal;
	cout << " Interest:               $ " << setprecision(2) << fixed << interest << endl;
	amount=interest+principal;
	cout << " Amount in Savings:      $ " << setprecision(2) << fixed << amount << endl;
}  
	
	
