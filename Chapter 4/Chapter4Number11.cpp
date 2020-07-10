#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	//Get the system time.
	int enter;
	int GangWeed=time(0);
	
	//Seed random number generator
	srand(GangWeed);
	
	const int min=1;
	const int max=10000;
	int bruh=(rand() % max)+min;
	int bruh2=(rand() % max)+min;
	
	cout << "\n   " <<  bruh << endl;
	cout << "  +" << bruh2 << endl;
	cout << "---------" << endl;
	cout << "\n\n Solve the problem and then press enter to see the solution. \n";
	cin >> enter;
	cout << "\n   " <<  bruh << endl;
	cout << "  +" << bruh2 << endl;
	cout << "---------" << endl;
	cout << "   " << bruh+bruh2 << endl;
	if( (bruh+bruh2)==enter)
	{
		cout << "Congratulations! You got it right! \n";
	}
	else
	{
		cout << "No. The answer was " << bruh+bruh2 << ".\n";
		cout << "Better luck next time! \n";
	}
	return 0;
}
	
