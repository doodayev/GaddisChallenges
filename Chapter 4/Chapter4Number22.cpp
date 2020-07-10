#include <iostream>
using namespace std;
int main()
{
	int EFreeze=-173;
	int EBoil=172;
	int MFreeze=-38;
	int MBoil=676;
	int OFreeze=-362;
	int OBoil=-306;
	int WFreeze=32;
	int WBoil=212;
	double Temp;
	
	cout << "Enter the temperature \n";
	cin >> Temp;
	
	if(Temp<EFreeze)
	{
		cout << "Ethyl alcohol will freeze at this temperature. \n";
	}
	if(Temp<MFreeze)
	{
		cout << "Mercury will freeze at this temperature. \n";
	}
	if(Temp<OFreeze)
	{
		cout << "Oxygen will freeze at this temperature. \n";
	}
	if(Temp<WFreeze)
	{
		cout << "Water will freeze at this temperature. \n";
	}
	if(Temp>EBoil)
	{
		cout << "Etyl alcohol will boil at this temperature. \n";
	}
	if(Temp>MBoil)
	{
		cout << "Mercury will boil at this temperature. \n";
	}
	if(Temp>OBoil)
	{
		cout << "Oxygen will boil at this temperature. \n";
	}
	if(Temp>WBoil)
	{
		cout << "Water will boil at this temperature. \n";
	}
}
	
