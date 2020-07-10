//Stupid ass copypasta problem

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double carbon=258.0;
	double air=331.5;
	double helium=972;
	double hydrogen=1270;
	int choice;
	double distance;
	double time;
	cout << "Pick one of these (use numbers) \n";
	cout << "1) Cabon Dioxide \n";
	cout << "2) Air \n";
	cout << "3) Helium \n";
	cout << "4) Hydrogen \n";
	cin >> choice;
	if(choice>4 || choice<1)
	{
		cout << "NOT A VALID CHOICE... RETARD! \n";
		return 0;
	}
	if(choice==1)
	{
		cout << "Enter time. \n";
		cin >> time;
		if(time<0)
		{
			cout << "IMPOSSIBLE... RETARD! \n";
			return 0;
		}
		if(time>30)
		{
			cout << "Arbitrary ass question requires this program to only accept up to 30 seconds. \n";
			return 0;
		}
		distance=time*carbon;
		cout << "Distance traveled will be " << setprecision(4) << fixed << distance << " seconds. \n";
	}
	if(choice==2)
	{
		cout << "Enter time. \n";
		cin >> time;
		if(time<0)
		{
			cout << "IMPOSSIBLE... RETARD! \n";
			return 0;
		}
		if(time>30)
		{
			cout << "Arbitrary ass question requires this program to only accept up to 30 seconds. \n";
			return 0;
		}
		distance=time*air;
		cout << "Distance traveled will be " << setprecision(4) << fixed << distance << " seconds. \n";
	}
	if(choice==3)
	{
		cout << "Enter time. \n";
		cin >> time;
		if(time<0)
		{
			cout << "IMPOSSIBLE... RETARD! \n";
			return 0;
		}
		if(time>30)
		{
			cout << "Arbitrary ass question requires this program to only accept up to 30 seconds. \n";
			return 0;
		}
		distance=time*helium;
		cout << "Distance traveled will be " << setprecision(4) << fixed << distance << " seconds. \n";
	}
	if(choice==4)
	{
		cout << "Enter time. \n";
		cin >> time;
		if(time<0)
		{
			cout << "IMPOSSIBLE... RETARD! \n";
			return 0;
		}
		if(time>30)
		{
			cout << "Arbitrary ass question requires this program to only accept up to 30 seconds. \n";
			return 0;
		}
		distance=time*hydrogen;
		cout << "Distance traveled will be " << setprecision(4) << fixed << distance << " seconds. \n";
	}
}
