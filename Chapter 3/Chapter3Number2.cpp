#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int AssA=15;
	int AssB=12;
	int AssC=9;
	int AssAsold;
	int AssBsold;
	int AssCsold;
	double income;
	
	cout << " How many tickets of class A were sold? ";
	cin >> AssAsold;
	cout << " How many tickets of class B were sold? ";
	cin >> AssBsold;
	cout << " How many tickets of class C were sold? ";
	cin >> AssCsold;
	
	income=AssAsold*AssA+AssB*AssBsold+AssC*AssCsold;
	cout << "You've made $ " << setprecision(2) << fixed << income << " from sales. \n";
} 
