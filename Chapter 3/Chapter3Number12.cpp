// Im aware this guy only wanted a one way conversion but I wanted
//to go the extra mile with this program

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double Ceenus;
	double Feenus;
	int decimals;
	int choice;
	cout << "What are you trying to convert to? \n\n";
	cout << "1) Fahrenheit to Celsius \n";
	cout << "2) Celsius to Farenheit \n";
	cout << "Enter 1 or 2 \n";
	cin >> choice;
	if(choice==1)
	{
		cout << "Enter the temperature in Fahrenheit \n";
		cin >> Feenus;
		Ceenus=(Feenus-32)*(5.00/9.00);
		cout << "How many decimals do you want the answer to output? \n";
		cin >> decimals;
		cout << Feenus << " degrees Fahrenheit is " << setprecision(decimals) << fixed << Ceenus << " degrees Celsius \n";  
	}
	if(choice==2)
	{
		cout << "Enter the temperature in Celsius \n";
		cin >> Ceenus;
		Feenus=(9.00/5.00)*Ceenus+32;
		cout << "How many decimals do you want the answer to output? \n";
		cin >> decimals;
		cout << Ceenus << " degrees Celsius is " << setprecision(decimals) << fixed << Feenus << " degrees Fahrenheit \n";
	}
	
	return 0;
}
