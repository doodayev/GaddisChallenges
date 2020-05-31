#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double house;
	cout << "How much does it cost to replace your hose? $";
	cin >> house;
	cout << "You should buy $" << setprecision(2) << fixed << house*.8 << " of insurance. \n";
}
	 
