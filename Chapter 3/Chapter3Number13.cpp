#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double dollars;
	cout << "Enter the amount of dollars \n";
	cin >> dollars;
	double Yen=dollars*98.93;
	double Euros=dollars*.74;
	cout << "$" << setprecision(2) << fixed << dollars << " is: \n" << setprecision(2) << fixed << Yen << " Yen \n" <<   setprecision(2) << fixed << Euros << " Euros \n";
	return 0;
}
