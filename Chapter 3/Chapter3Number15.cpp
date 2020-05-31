#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double PropertyTax, PropertyValue, Assessment;
	cout << "How much is your property worth? ";
	cin >> PropertyValue;
	Assessment=PropertyValue*.6;
	PropertyTax=Assessment*.0075;
	cout << "The assessment value is $ " << setprecision(2) << fixed << Assessment << endl; 
	cout << "The Property Tax is $ " << setprecision(2) << fixed << PropertyTax << endl;
	return 0;
}
