#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double pi=3.14159;
	double diameter;
	double slices;
	double OneSlice=14.125;
	double area;
	
	cout << "What is the diameter of the pizza in inches? ";
	cin >> diameter;
	area=(diameter/2)*(diameter/2)*pi;
	slices=area/OneSlice;
	cout << "This pizza has " << setprecision(1) << fixed << slices << " slices. \n";
	return 0;
}
	
