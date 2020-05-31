#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string movieName;
	int child;
	int adult;
	cout << "What was the name of the movie? ";
	getline(cin,movieName);
	cout << "How many adult tickets were sold? ";
	cin >> adult;
	cout << "How many child tickets were sold? ";
	cin >> child;
	cout << "Movie Name:                        " << movieName << endl;
	cout << "Adult Tickets Sold:                 " << adult << endl;
	cout << "Child Tickets Sold:                " << child << endl;
	double gross=(adult*10)+(child*6);
	cout << "Gross Box Office Profit:          $" << setprecision(2) << fixed << gross << endl;
	double net=gross*.2+0.00;
	cout << "Net Box Office Profit:            $" << setprecision(2) << fixed << net << endl;
	cout << "Amount Paid to Distributor:       $" << gross-net << endl;
	return 0;
} 
