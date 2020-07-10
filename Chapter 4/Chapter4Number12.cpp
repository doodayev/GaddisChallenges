#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int quantity;
	double price=99.00;
	cout << "How many units do you want to purchase. \n";
	cin >> quantity;
	if(quantity<0)
	{
		cout << "FUCKING RETARD \n";
	}
	if(0<quantity && quantity<10)
	{
		cout << "That will cost $ " << setprecision(2) << fixed << quantity*price << endl;
	}
	if(10<=quantity && quantity<20)
	{
		cout << "That will cost $ " << setprecision(2) << fixed << (quantity*price)*.8 << endl;
	}
	if(20<=quantity && quantity<50)
	{
		cout << "That will cost $ " << setprecision(2) << fixed << (quantity*price)*.7 << endl;
	}
	if(50<=quantity && quantity<100)
	{
		cout << "That will cost $ " << setprecision(2) << fixed << (quantity*price)*.6 << endl;
	}
	if(100<=quantity)
	{
		cout << "That will cost $ " << setprecision(2) << fixed << (quantity*price)*.5 << endl;
	}
}
