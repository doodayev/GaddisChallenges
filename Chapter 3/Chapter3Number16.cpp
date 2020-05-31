#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double PropertyTaxRate, PropertyTax, PropertyValue, Assessment;
	cout << "How much is your property worth? ";
	cin >> PropertyValue;
	cout << "How much is the property tax per 100$ of assessment value? $";
	cin >> PropertyTaxRate;
	Assessment=PropertyValue*.6;
	double SeniorAssessment=Assessment-5000;
	PropertyTax=(PropertyTaxRate*SeniorAssessment)/100;
	cout << "A senior citizen would be charged $" << setprecision(2) << fixed <<PropertyTax << " in property tax per year. \n";
	cout << "This can be paid in 4 quarterly payments of $" << setprecision(2) << fixed << PropertyTax/4 << endl;
	return 0; 
	
	
}
