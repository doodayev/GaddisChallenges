#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int calories=100;
	int cookies;
	cout << "How many cookies did you eat? ";
	cin >> cookies;
	cout << "You took in " << cookies*calories << " calories. \n";
	return 0;
}
