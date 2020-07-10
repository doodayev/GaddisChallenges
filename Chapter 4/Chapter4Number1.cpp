#include <iostream>
using namespace std;

int main()
{
	double a;
	cout << "Enter the first number ";
	cin >> a;
	double b;
	cout << "Enter the second number ";
	cin >> b;
	if (a>b)
	{
		cout << "The first number is greater than the second number" << endl;
		cout << a << " > " << b << endl;
	}
	if (a==b)
	{
		cout << "The two numbers are equal" << endl;
		cout << a << " == " << b << endl;
	}
	if(a<b)
	{
		cout << "The second number is greather than the first number" << endl;
		cout << a << " < " << b << endl;
	}
}
