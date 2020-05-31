// This program demonstrates a problem that occurs
// when you mix cin >> with cin.get().

#include <iostream>
using namespace std;

int main()
{
	char ch;
	int number;
	cout << "Enter a number: ";
	cin >> number;
	cout << "Enter a character: ";
	ch=cin.get();
	cout << "Thank You!\n";
	return 0;
}
