#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int checks; 
	double balance;
	double fees;
	cout << "What's the balance of the account? ";
	cin >> balance;
	cout << "How many checks were deposited? ";
	cin >> checks;
	if(balance<400)
	{
		cout << "Broke ass nigga. You just lost 15$ because your balance was under 400$. \n";
		balance=balance-15;
	}
	if(checks<0)
	{
		cout << "RETARD. YOU'VE OVERDRAWN! \n";
	}
	if(checks>0 && checks<20)
	{
		fees=checks*.1;
		balance=balance-fees;
		cout << "You've lost $" << setprecision(2) << fixed << fees << " due to scummy bank fees regarding check deposits. \n";
		cout << "Your balance is now $" << setprecision(2) << fixed << balance << endl;
	}
	if(checks>19 && checks<40)
	{
		fees=checks*.08;
		balance=balance-fees;
		cout << "You've lost $" << setprecision(2) << fixed << fees << " due to scummy bank fees regarding check deposits. \n";
		cout << "Your balance is now $" << setprecision(2) << fixed << balance << endl;
	}
	if(checks>39 && checks<60)
	{
		fees=checks*.06;
		balance=balance-fees;
		cout << "You've lost $" << setprecision(2) << fixed << fees << " due to scummy bank fees regarding check deposits. \n";
		cout << "Your balance is now $" << setprecision(2) << fixed << balance << endl;
	}
	if(checks>60)
	{
		fees=checks*.04;
		balance=balance-fees;
		cout << "You've lost $" << setprecision(2) << fixed << fees << " due to scummy bank fees regarding check deposits. \n";
		cout << "Your balance is now $" << setprecision(2) << fixed << balance << endl;
	}
}
