//Strangely, this programming challenge doesn't have any user input
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int shares=1000;
	double purchasePrice=45.50;
	double commission=.02;
	double salePrice=56.90;
	double purchaseAmount=purchasePrice*shares;
	double brokerPurchase=purchaseAmount*commission;
	double saleAmount=salePrice*shares;
	double brokerSale=saleAmount*commission;
	double profit=saleAmount-(brokerPurchase+purchaseAmount+brokerSale);
	
	cout << "Joe paid  $ " << setprecision(2) << fixed << purchaseAmount << " for the stock. \n";
	cout << "Joe paid  $ " << setprecision(2) << fixed << brokerPurchase << " to the broker for purchasing the stock. \n";
	cout << "Joe sold the stocks for  $ " << setprecision(2) <<  fixed << saleAmount << endl;
	cout << "Joe paid  $ " << setprecision(2) << fixed << brokerSale << " to the broker for the sale .\n";
	cout << "Joe made a profit of $" << setprecision(2) << fixed << profit << endl;
	return 0;
} 
