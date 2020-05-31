#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int males;
	int females;
	cout << "How many males are in this class? ";
	cin >> males;
	cout << "How many females are in this class? ";
	cin >> females;
	double total=(males+females);
	double malePercentage=(males/total);
	double femalePercentage=(females/total);
	cout << "Percentage of males is " << fixed << setprecision(2) << malePercentage*100 << endl;
	cout << "Percentage of females is " << fixed << setprecision(2) << femalePercentage*100 << endl;
	return 0;
}
	
