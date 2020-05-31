//This program uses a type cast to avoid integer division
#include <iostream>
using namespace std;

int main()
{
	int books;
	int months;
	double perMonth;
	
	cout << "How many books do you plan to read? ";
	cin >> books;
	cout << "How many months will it take you to read them? ";
	cin >> months;
	perMonth=static_cast<double>(books)/months;
	cout << "That is " << perMonth << " books per month. \n";
	return 0;
}
