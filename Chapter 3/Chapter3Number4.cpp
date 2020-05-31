#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	string Month1, Month2, Month3;
	double month1, month2, month3;
	cout << "This program gets the average rainfall of 3 months \n";
	cout << "Enter the name of the first month ";
	cin >> Month1;
	cout << "Enter the name of the second month ";
	cin >> Month2;
	cout << "Enter the name of the third month ";
	cin >> Month3;
	cout << "Enter the rainfall for " << Month1 << " ";
	cin >> month1;
	cout << "Enter the rainfall for " << Month2 << " ";
	cin >> month2;
	cout << "Enter the rainfall for " << Month3 << " ";
	cin >> month3;
	double average=(month1+month2+month3)/3;
	cout << "The average rainfall for " << Month1 << ", " << Month2 << ", and " << Month3 << " was: " << setprecision(2) << fixed << average << " inches \n";	
	return 0;
}
