#include <iostream>
using namespace std;

int main()
{
	double widget=12.5;
	double weight, palletweight;
	cout << "How much does the pallet weight? ";
	cin >> palletweight;
	cout << "How much is the total weight? ";
	cin >> weight;
	int stacked=(weight-palletweight)/8;
	cout << "There are " << stacked << " widgets." << endl;
	return 0;
} 
	
	
